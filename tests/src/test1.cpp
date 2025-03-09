#include<iostream>
#include<gtest/gtest.h>
#include<Algo.h>
using namespace std;

TEST(TestSuit, _1){
    EXPECT_EQ(Algo::add(12, 8), 20);
}