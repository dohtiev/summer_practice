/*
* @file test.cpp
* @author Dohtiev Y. O. 515-B
* @date 7 July 2022
* @brief summer practice
*/

#include "pch.h"
#include "../functions.h"

TEST(Intersection_check, negative) {
	EXPECT_EQ(0, intersection_check(-1, -1, -1, 3, 1, 2, 1, -2));
	EXPECT_EQ(0, intersection_check(-3, 4, -3, -2, 4, 3, -2, 3));
	EXPECT_EQ(0, intersection_check(2, 3, -4, -3, -1, -4, 3, 1));
}
TEST(Intersection_check, positive) {
	EXPECT_EQ(1, intersection_check(-3, 4, -3, -4, -4, -1, 4, -1));
	EXPECT_EQ(1, intersection_check(-2, -4, 4, 2, -3, 4, 4, -3));
}
