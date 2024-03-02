// Copyright 2024 Khodyrev Fedor
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(algtest, test_seven_is_prime_number) {
    EXPECT_TRUE(checkPrime(7));
}

TEST(algtest, test_ten_is_not_prime_number) {
    EXPECT_FALSE(checkPrime(10));
}

TEST(algtest, test_negative_number_is_not_prime_number) {
    EXPECT_FALSE(checkPrime(-7));
}

TEST(algtest, test_two_is_first_prime_number) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(algtest, test_seven_is_fourth_prime_number) {
    EXPECT_EQ(nPrime(4), 7);
}

TEST(algtest, test_three_is_next_prime_number_after_two) {
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(algtest, test_seven_is_next_prime_number_after_five) {
    EXPECT_EQ(nextPrime(5), 7);
}

TEST(algtest, test_four_is_not_next_prime_number_after_three) {
    EXPECT_NE(nextPrime(3), 4);
}

TEST(algtest, test_sum_of_prime_numbers_before_ten_is_seventeen) {
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(algtest, test_sum_of_prime_numbers_before_seven_is_ten) {
    EXPECT_EQ(sumPrime(7), 10);
}

TEST(algtest, second_task) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
