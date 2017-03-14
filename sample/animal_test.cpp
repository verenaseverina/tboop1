#include "../src/animal.h"
#include "../src/land_animal.h"
#include "../src/Binatang/tiger.h"
#include <gtest/gtest.h>

class AnimalTest : public ::testing::Test {
  protected:
  	AnimalTest();
};

TEST(AnimalTest, GetX) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(1,A->GetX());
}

TEST(AnimalTest, GetY) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(1,A->GetY());
}

TEST(AnimalTest, GetID) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(1,A->GetID());
}

TEST(AnimalTest, GetTame) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(0,A->GetTame());
}

TEST(AnimalTest, GetHab) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ('x',A->GetHab()[0]);
}

TEST(AnimalTest, GetContent) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ('H',A->GetContent());
}
/*
TEST(AnimalTest, GetInteract) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_STREQ("Roooarrrr",A->GetInteract());
}*/


//g++ ../src/animal.cpp ../src/land_animal.cpp ../src/Binatang/tiger.cpp animal_test.cpp -o main -pthread -lgtest_main -lgtest