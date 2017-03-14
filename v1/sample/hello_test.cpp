#include "hello.h"
#include<gtest/gtest.h>

class HelloTest : public ::testing::Test {
  protected:
    HelloTest(){}
};

TEST(HelloTest, GetTextMethod) {
  Hello hello;
  ASSERT_EQ("Hello World", hello.GetText());
}
