#include "Checkout.h"
#include <string>

using namespace std;

// constructor intialize total to 0;
Checkout::Checkout() {
    total = 0;
}

Checkout::~Checkout() {

}

void Checkout::addItemPrice(string item, int price) {
    prices[item] = price;
}

void Checkout::addItem(string item) {
    total += prices[item];
}

int Checkout::calculateTotal() {
    return total;
}