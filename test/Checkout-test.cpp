
#include "gtest/gtest.h"
#include "Checkout.h"

using namespace std;

// using TEST fixture to custom initialize work before executing a unit test
class CheckoutTests : public ::testing::Test {
public:
protected:
    Checkout checkout;
};

TEST(CheckoutTest, CanInstantiate) {
    Checkout co;
}

TEST_F(CheckoutTests, CanAddItemPrice) {
    checkout.addItemPrice("Bread", 1);
}

TEST_F(CheckoutTests, CanAddItem) {
    checkout.addItem("Bread");
}

TEST_F(CheckoutTests, CanCalculateTotal) {
    checkout.addItemPrice("Bread", 1);
    checkout.addItem("Bread");
    int total = checkout.calculateTotal();
    ASSERT_EQ(1, total);
}

TEST_F(CheckoutTests, CanGetTotalForMultipleItems) {
    checkout.addItemPrice("Apple", 1);
    checkout.addItemPrice("Bread", 2);
    checkout.addItem("Apple");
    checkout.addItem("Bread");
    int total = checkout.calculateTotal();
    ASSERT_EQ(3, total);
}

TEST_F(CheckoutTests, CanAddDiscount) {
    checkout.addDiscount("Bread", 3, 2);
}

TEST_F(CheckoutTests, CanCalculateTotalWithDiscount) {
    checkout.addItemPrice("Apple", 1);
    checkout.addDiscount("Apple", 3, 2);
    checkout.addItem("Apple");
    checkout.addItem("Apple");
    checkout.addItem("Apple");
    int total = checkout.calculateTotal();
    ASSERT_EQ(2, total);
}