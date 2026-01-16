#include "gtest/gtest.h"
#include "../MPAGSCipher/TransformChar.hpp"
#include <vector>

TEST(AlphaNumieric, CharactersAreUpperCase)
{
    const std::string upper{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const std::string lower{"abcdefghijklmnopqrstuvwxyz"};

    for (std::size_t i{0}; i < upper.size(); i++){
        EXPECT_EQ(transformChar(lower[i]), std::string{upper[i]});
    }
}

TEST(AlphaNumieric, CharactersAreTransliterated)
{
    const std::vector<char> numbers{'0','1','2','3','4','5','6','7','8','9'};
    const std::vector<std::string> words{"ZERO","ONE","TWO","THREE","FOUR",
                                        "FIVE","SIX","SEVEN","EIGHT","NINE"};
    for (std::size_t i{0}; i < numbers.size(); i++){
        EXPECT_EQ(transformChar(numbers[i]), words[i]);
    }
}

TEST(Punctuation, SpecialCharactersAreRemoved)
{
    const std::string specialChars{"!@#$%^&*()-_=+[]{};:'\",.<>/?\\|`~"};
    for (const auto& c : specialChars){
        EXPECT_EQ(transformChar(c), "");
    }
}