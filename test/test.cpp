//
// Created by bence on 9/26/17.
//

#include <gtest/gtest.h>
#include "../src/decipher.h"

namespace tests {

    TEST(CipherTests, NullTests) {
        std::string message("hello");
        std::string key("KEY");
        ASSERT_EQ(message, decipher("", message));
        ASSERT_EQ("", decipher(key, ""));
        ASSERT_EQ("", decipher("", ""));
    }

    int main(int argc, char *argv[]){
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
}