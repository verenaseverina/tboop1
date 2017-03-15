#include "../src/cage.h"
#include <gtest/gtest.h>

class CageTest : public ::testing::Test {
  protected:
  	CageTest();
};

TEST(CageTest, GetCageRow) {
  Cage c(1,1);
  ASSERT_EQ(1,c.GetCageRow());
}

TEST(CageTest, GetCageCol) {
  Cage c(1,1);
  ASSERT_EQ(1,c.GetCageCol());
}

//g++ ../src/Cage.cpp ../src/habitat.cpp ../src/facility.cpp Cage_test.cpp -o main -pthread -lgtest_main -lgtest