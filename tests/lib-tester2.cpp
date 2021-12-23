#include <gtest/gtest.h>
#include "../src/Example.hpp"

TEST(Test1, Number) {
    ASSERT_EQ(11, num2());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
