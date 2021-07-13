#include "Formular.h"
#include "gtest/gtest.h"

TEST(blaTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (Formular::bla(0), 0);
    EXPECT_EQ (Formular::bla(10), 20);
    EXPECT_EQ (Formular::bla(50), 100);
}