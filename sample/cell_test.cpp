#include "../src/cell.h"
#include "../src/habitat.h"
#include "../src/facility.h"
#include <gtest/gtest.h>

class CellTest : public ::testing::Test {
  protected:
  	CellTest();
};

TEST(CellTest, GetCellRow) {
  Cell c(1,1);
  ASSERT_EQ(1,c.GetCellRow());
}

TEST(CellTest, GetCellCol) {
  Cell c(1,1);
  ASSERT_EQ(1,c.GetCellCol());
}

TEST(CellTest, GetCellContent) {
  Cell c(1,1);
  ASSERT_EQ('\0',c.GetCellContent());
}

TEST(HabitatTest, GetHabitatContent) {
  Habitat c;
  ASSERT_EQ('0',c.GetCellContent());
}

TEST(HabitatTest, GetHabitatContentX) {
  Habitat c('x',1,1);
  ASSERT_EQ('x',c.GetCellContent());
}

TEST(FacilityTest, GetFacilityContentX) {
  Facility c('x',1,1);
  ASSERT_EQ('x',c.GetCellContent());
}

//g++ ../src/cell.cpp ../src/habitat.cpp ../src/facility.cpp cell_test.cpp -o main -pthread -lgtest_main -lgtest