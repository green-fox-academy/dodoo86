#include "Apple.h"
#include "../googletest/googletest/include/gtest/gtest.h"
#include <gtest/gtest.h>

TEST(apple_check, test_apple){
EXPECT_EQ(getApple(), "apple");
}