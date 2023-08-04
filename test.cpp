#include "pch.h"
#include "chandrayaan3.cpp"

TEST(TestDirections, TestDirectionsFromNorthToDown) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);
	
	chandrayan->turn_down();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('D', newdir);
	EXPECT_TRUE(true);
}


TEST(TestDirections, TestDirectionsFromNorthToUp) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_up();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('U', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromNorthToLeft) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_left();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('W', newdir);
	EXPECT_TRUE(true);

}

TEST(TestDirections, TestDirectionsFromNorthToRight) {
	char dir = 'N';
	vector<int>position = { 0,0,0 };
	Chandrayan* chandrayan = new Chandrayan(dir, position);

	chandrayan->turn_right();
	char newdir = chandrayan->getSpacecraftDirection();
	EXPECT_EQ('E', newdir);
	EXPECT_TRUE(true);

}