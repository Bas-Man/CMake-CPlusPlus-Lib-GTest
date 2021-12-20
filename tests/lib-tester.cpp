#include <gtest/gtest.h>
#include "../src/Example.hpp"

TEST(TESTThree, Number) {
    ASSERT_EQ(10, num());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
