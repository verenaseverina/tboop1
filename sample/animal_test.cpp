#include "../src/animal.h"
#include "../src/land_animal.h"
#include "../src/water_animal.h"
#include "../src/air_animal.h"
#include "../src/land_air_animal.h"
#include "../src/land_water_animal.h"
#include "../src/water_air_animal.h"
#include "../src/Binatang/tiger.h"
#include "../src/Binatang/whale.h"
#include "../src/Binatang/ostrich.h"
#include "../src/Binatang/toucan.h"
#include "../src/Binatang/hippopotamus.h"
#include "../src/Binatang/flying_fish.h"
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
  ASSERT_EQ('^',A->GetHab()[0]);
}

TEST(AnimalTest, GetContent) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ('H',A->GetContent());
}

/*TEST(AnimalTest, Interact) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_STREQ("Roooarrrr",A->Interact());
}
*/
//g++ ../src/animal.cpp ../src/Binatang/whale.cpp ../src/Binatang/ostrich.cpp ../src/Binatang/flying_fish.cpp ../src/Binatang/toucan.cpp ../src/Binatang/hippopotamus.cpp ../src/air_animal.cpp ../src/water_animal.cpp ../src/land_water_animal.cpp ../src/land_air_animal.cpp ../src/water_air_animal.cpp ../src/land_animal.cpp ../src/Binatang/tiger.cpp animal_test.cpp -o main -pthread -lgtest_main -lgtest -std=c++11