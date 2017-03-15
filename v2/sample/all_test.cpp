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

//CelTest
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


//HabitatTest
TEST(HabitatTest, GetHabitatContent) {
  Habitat c;
  ASSERT_EQ('0',c.GetCellContent());
}

TEST(HabitatTest, GetHabitatContentX) {
  Habitat c('x',1,1);
  ASSERT_EQ('x',c.GetCellContent());
}


//FacilityTest
TEST(FacilityTest, GetFacilityContentX) {
  Facility c('x',1,1);
  ASSERT_EQ('x',c.GetCellContent());
}

//StateTest
TEST(StateTest, StateGetWidth) {
  State z;
  ASSERT_EQ(5,z.GetWidth());
}

TEST(StateTest, StateGetHeight) {
  State z;
  ASSERT_EQ(5,z.GetHeight());
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