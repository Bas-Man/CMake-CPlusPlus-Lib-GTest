#include <gtest/gtest.h>
#include "../src/Example.hpp"

TEST(TESTOne, Test1) {
    EXPECT_EQ(1,1);
}

TEST(TestTwo, test2) {
    ASSERT_EQ(true, true);
}

TEST(TESTThree, Number) {
    ASSERT_EQ(10, num());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}