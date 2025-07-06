#include <gtest/gtest.h>
#include "../src/calculator.h"

TEST(CalculatorTest, AddTwoPositiveNumbers) {
    Calculator calculator;
    double result = calculator.add(2.0, 3.0);
    EXPECT_DOUBLE_EQ(result, 5.0);
}

TEST(CalculatorTest, SubtractLargeFromSmallNumber) {
    Calculator calculator;
    double result = calculator.subtract(10.0, 4.0);
    EXPECT_DOUBLE_EQ(result, 6.0);
}

TEST(CalculatorTest, MultiplyTwoNumbers) {
    Calculator calculator;
    double result = calculator.multiply(4.0, 5.0);
    EXPECT_DOUBLE_EQ(result, 20.0);
}

TEST(CalculatorTest, MultiplyByZero) {
    Calculator calculator;
    double result = calculator.multiply(0.0, 5.0);
    EXPECT_DOUBLE_EQ(result, 0.0);
}

TEST(CalculatorTest, DivideTwoNumbers) {
    Calculator calculator;
    double result = calculator.divide(10.0, 2.0);
    EXPECT_DOUBLE_EQ(result, 5.0);
}

TEST(CalculatorTest, DivisionByZeroThrowsException) {
    Calculator calculator;
    EXPECT_THROW(calculator.divide(10.0, 0), std::invalid_argument);
}

TEST(CalculatorTest, DivisionNegativeNumbers) {
    Calculator calculator;
    double result = calculator.divide(-10.0, -2.0);
    EXPECT_DOUBLE_EQ(result, 5.0);
}

TEST(CalculatorTest, PowerTwoPositiveNumbers) {
    Calculator calculator;
    double result = calculator.power(2.0, 3.0);
    EXPECT_DOUBLE_EQ(result, 8.0);
}

TEST(CalculatorTest, PowerZeroExponent) {
    Calculator calculator;
    double result = calculator.power(2.0, 0.0);
    EXPECT_DOUBLE_EQ(result, 1.0);
}

TEST(CalculatorTest, SquareRootOfZeroReturnsZero) {
    Calculator calculator;
    double result = calculator.sqrt(0.0);
    EXPECT_DOUBLE_EQ(result, 0.0);
}

TEST(CalculatorTest, SquareRootOfNegativeNumberThrowsException) {
    Calculator calculator;
    EXPECT_THROW(calculator.sqrt(-1.0), std::domain_error);
}

TEST(CalculatorTest, SquareRootNegativeNumber) {
    Calculator calculator;
    EXPECT_THROW(calculator.sqrt(-4.0), std::domain_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

