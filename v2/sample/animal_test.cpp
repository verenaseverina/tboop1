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
#include "../src/Binatang/panda.h"
#include "../src/Binatang/anoa.h"
#include "../src/Binatang/rhino.h"
#include "../src/Binatang/kangaroo.h"
#include "../src/Binatang/dolphin.h"
#include "../src/Binatang/shark.h"
#include "../src/Binatang/kelelawar.h"
#include "../src/Binatang/elang_botak.h"
#include "../src/Binatang/penguin.h"
#include "../src/Binatang/crocodile.h"
#include "../src/Binatang/kasuari.h"
#include "../src/Binatang/kiwi.h"
#include "../src/Binatang/pelikan.h"
#include "../src/Binatang/cormorants.h"
#include <gtest/gtest.h>

class AnimalTest : public ::testing::Test {
  protected:
  	AnimalTest();
};


//LandAnimal
TEST(LandAnimalTest, GetX) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(1,A->GetX());
}

TEST(LandAnimalTest, GetY) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(1,A->GetY());
}

TEST(LandAnimalTest, GetID) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(1,A->GetID());
}

TEST(LandAnimalTest, GetTame) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ(0,A->GetTame());
}

TEST(LandAnimalTest, GetHab) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ('^',A->GetHab()[0]);
}

TEST(LandAnimalTest, GetContent) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ('H',A->GetContent());
}

TEST(LandAnimalTest, Interact) {
  Animal* A = new Tiger(1,1,1);
  ASSERT_EQ("Roooarrrr",A->Interact());
}

//WaterAnimal
TEST(WaterAnimalTest, GetX) {
  Animal* A = new Whale(1,1,1);
  ASSERT_EQ(1,A->GetX());
}

TEST(WaterAnimalTest, GetY) {
  Animal* A = new Whale(1,1,1);
  ASSERT_EQ(1,A->GetY());
}

TEST(WaterAnimalTest, GetID) {
  Animal* A = new Whale(1,1,1);
  ASSERT_EQ(1,A->GetID());
}

TEST(WaterAnimalTest, GetTame) {
  Animal* A = new Whale(1,1,1);
  ASSERT_EQ(1,A->GetTame());
}

TEST(WaterAnimalTest, GetHab) {
  Animal* A = new Whale(1,1,1);
  ASSERT_EQ('~',A->GetHab()[0]);
}

TEST(WaterAnimalTest, GetContent) {
  Animal* A = new Whale(1,1,1);
  ASSERT_EQ('W',A->GetContent());
}

TEST(WaterAnimalTest, Interact) {
  Animal* A = new Whale(1,1,1);
  ASSERT_EQ("Wet",A->Interact());
}


//AirAnimal
TEST(AirAnimalTest, GetX) {
  Animal* A = new Toucan(1,1,1);
  ASSERT_EQ(1,A->GetX());
}

TEST(AirAnimalTest, GetY) {
  Animal* A = new Toucan(1,1,1);
  ASSERT_EQ(1,A->GetY());
}

TEST(AirAnimalTest, GetID) {
  Animal* A = new Toucan(1,1,1);
  ASSERT_EQ(1,A->GetID());
}

TEST(AirAnimalTest, GetTame) {
  Animal* A = new Toucan(1,1,1);
  ASSERT_EQ(1,A->GetTame());
}

TEST(AirAnimalTest, GetHab) {
  Animal* A = new Toucan(1,1,1);
  ASSERT_EQ('`',A->GetHab()[0]);
}

TEST(AirAnimalTest, GetContent) {
  Animal* A = new Toucan(1,1,1);
  ASSERT_EQ('T',A->GetContent());
}

TEST(AirAnimalTest, Interact) {
  Animal* A = new Toucan(1,1,1);
  ASSERT_EQ("Kwwaakk",A->Interact());
}



//LandWaterAnimalTest
TEST(LandWaterAnimalTest, GetX) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ(1,A->GetX());
}

TEST(LandWaterAnimalTest, GetY) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ(1,A->GetY());
}

TEST(LandWaterAnimalTest, GetID) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ(1,A->GetID());
}

TEST(LandWaterAnimalTest, GetTame) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ(1,A->GetTame());
}

TEST(LandWaterAnimalTest, GetHab1) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ('^',A->GetHab()[0]);
}

TEST(LandWaterAnimalTest, GetHab2) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ('~',A->GetHab()[1]);
}

TEST(LandWaterAnimalTest, GetContent) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ('N',A->GetContent());
}

TEST(LandWaterAnimalTest, Interact) {
  Animal* A = new Hippopotamus(1,1,1);
  ASSERT_EQ("Grooowwll",A->Interact());
}



//LandAirAnimal
TEST(LandAirAnimalTest, GetX) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ(1,A->GetX());
}

TEST(LandAirAnimalTest, GetY) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ(1,A->GetY());
}

TEST(LandAirAnimalTest, GetID) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ(1,A->GetID());
}

TEST(LandAirAnimalTest, GetTame) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ(1,A->GetTame());
}

TEST(LandAirAnimalTest, GetHab1) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ('^',A->GetHab()[0]);
}

TEST(LandAirAnimalTest, GetHab2) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ('`',A->GetHab()[1]);
}

TEST(LandAirAnimalTest, GetContent) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ('O',A->GetContent());
}

TEST(LandAirAnimalTest, Interact) {
  Animal* A = new Ostrich(1,1,1);
  ASSERT_EQ("Nguuukkk",A->Interact());
}



//WaterAirAnimal
TEST(WaterAirAnimalTest, GetX) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ(1,A->GetX());
}

TEST(WaterAirAnimalTest, GetY) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ(1,A->GetY());
}

TEST(WaterAirAnimalTest, GetID) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ(1,A->GetID());
}

TEST(WaterAirAnimalTest, GetTame) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ(1,A->GetTame());
}

TEST(WaterAirAnimalTest, GetHab1) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ('~',A->GetHab()[0]);
}

TEST(WaterAirAnimalTest, GetHab2) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ('`',A->GetHab()[1]);
}

TEST(WaterAirAnimalTest, GetContent) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ('F',A->GetContent());
}

TEST(WaterAirAnimalTest, Interact) {
  Animal* A = new FlyingFish(1,1,1);
  ASSERT_EQ("*stride*",A->Interact());
}

TEST(WaterAirAnimalTest, MoveUp) {
  Animal* A = new FlyingFish(1,1,1);
  A->Move(1);
  ASSERT_EQ(0,A->GetY());
}

TEST(WaterAirAnimalTest, MoveRight) {
  Animal* A = new FlyingFish(1,1,1);
  A->Move(2);
  ASSERT_EQ(2,A->GetX());
}

TEST(WaterAirAnimalTest, MoveDown) {
  Animal* A = new FlyingFish(1,1,1);
  A->Move(3);
  ASSERT_EQ(2,A->GetY());
}

TEST(WaterAirAnimalTest, MoveLeft) {
  Animal* A = new FlyingFish(1,1,1);
  A->Move(4);
  ASSERT_EQ(0,A->GetX());
}

//g++ ../src/Binatang/panda.cpp ../src/Binatang/anoa.cpp ../src/Binatang/rhino.cpp ../src/Binatang/kangaroo.cpp ../src/Binatang/dolphin.cpp ../src/Binatang/shark.cpp ../src/Binatang/kelelawar.cpp ../src/Binatang/elang_botak.cpp ../src/Binatang/penguin.cpp ../src/Binatang/crocodile.cpp ../src/Binatang/kasuari.cpp ../src/Binatang/kiwi.cpp ../src/Binatang/pelikan.cpp ../src/Binatang/cormorants.cpp ../src/animal.cpp ../src/Binatang/whale.cpp ../src/Binatang/ostrich.cpp ../src/Binatang/flying_fish.cpp ../src/Binatang/toucan.cpp ../src/Binatang/hippopotamus.cpp ../src/air_animal.cpp ../src/water_animal.cpp ../src/land_water_animal.cpp ../src/land_air_animal.cpp ../src/water_air_animal.cpp ../src/land_animal.cpp ../src/Binatang/tiger.cpp animal_test.cpp -o main -pthread -lgtest_main -lgtest -std=c++11