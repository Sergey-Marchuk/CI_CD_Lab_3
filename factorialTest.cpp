#include "factorial.hpp"
#include "gtest/gtest.h"
#include "user_exception.hpp"
TEST(factorialTest, HandlesZeroInput) {
  EXPECT_EQ(factorial(0), 1);
}
// Tests factorial of positive numbers.
TEST(factorialTest, HandlesPositiveInput) {
  EXPECT_EQ(factorial(1), 1);
  EXPECT_EQ(factorial(2), 2);
  EXPECT_EQ(factorial(3), 6);
  EXPECT_EQ(factorial(8), 40320);
}
TEST(factorialTest, HandleNegativeInput) {
  EXPECT_THROW(factorial(-10), UserException);
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
