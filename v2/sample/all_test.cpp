#include "../src/animal.h"
#include "../src/state.h"
#include "../src/cell.h"
#include "../src/cage.h"
#include "../src/zoo.h"
#include <string>
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

#include <gtest/gtest.h>

class AllTest : public ::testing::Test {
  protected:
  	AllTest();
};


//Animal
TEST(AnimalTest, GetX) {
  Animal A(1,1,1,'F');
  ASSERT_EQ(1,A.GetX());
}

TEST(AnimalTest, GetY) {
  Animal A(1,1,1,'F');
  ASSERT_EQ(1,A.GetY());
}

TEST(AnimalTest, GetID) {
  Animal A(1,1,1,'F');
  ASSERT_EQ(1,A.GetID());
}

TEST(AnimalTest, GetTame) {
  Animal A(1,1,1,'F');
  ASSERT_EQ(1,A.GetTame());
}

TEST(AnimalTest, GetHab1) {
  Animal A(1,1,1,'F');
  ASSERT_EQ('~',A.GetHab()[0]);
}

TEST(AnimalTest, GetHab2) {
  Animal A(1,1,1,'F');
  ASSERT_EQ('`',A.GetHab()[1]);
}

TEST(AnimalTest, GetContent) {
  Animal A(1,1,1,'F');
  ASSERT_EQ('F',A.GetContent());
}

TEST(AnimalTest, Interact) {
  Animal A(1,1,1,'F');
  ASSERT_EQ("*stride*",A.Interact());
}

TEST(AnimalTest, MoveUp) {
  Animal A(1,1,1,'F');
  A.Move(1);
  ASSERT_EQ(0,A.GetY());
}

TEST(AnimalTest, MoveRight) {
  Animal A(1,1,1,'F');
  A.Move(2);
  ASSERT_EQ(2,A.GetX());
}

TEST(AnimalTest, MoveDown) {
  Animal A(1,1,1,'F');
  A.Move(3);
  ASSERT_EQ(2,A.GetY());
}

TEST(AnimalTest, MoveLeft) {
  Animal A(1,1,1,'F');
  A.Move(4);
  ASSERT_EQ(0,A.GetX());
}

//CelTest
TEST(CellTest, GetCellRow) {
  Cell c;
  ASSERT_EQ(-1,c.GetCellRow());
}

TEST(CellTest, GetCellCol) {
  Cell c;
  ASSERT_EQ(-1,c.GetCellCol());
}

TEST(CellTest, GetCellContent) {
  Cell c;
  ASSERT_EQ('\0',c.GetCellContent());
}


//ZooTest
TEST(ZooTest, ZooIsHabitat) {
  Zoo z;
  ASSERT_EQ(0,z.IsHabitat('^'));
}

TEST(ZooTest, ZooIsFacility) {
  Zoo z;
  ASSERT_EQ(0,z.IsFacility('_'));
}


//g++ ../src/animal.cpp ../src/cage.cpp ../src/cell.cpp ../src/state.cpp ../src/zoo.cpp  all_test.cpp -o main -pthread -lgtest_main -lgtest -std=c++11