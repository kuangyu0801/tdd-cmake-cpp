#include "Checkout.h"
#include <string>
#include <stdexcept>

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
    map<string, int>::iterator priceIter = prices.find(item);
    if (priceIter == prices.end()) {
        throw invalid_argument("Item has no price");
    }
    items[item] += 1;
}

void Checkout::calcaulteItem(string item, int itemCnt) {
    map<string, Discount>::iterator discountIter;
    discountIter = discounts.find(item);
        if (discountIter != discounts.end()) {
            Discount discount = discountIter->second;
            if (itemCnt >= discount.numItem) {
                int numOfDiscount = itemCnt / discount.numItem;
                total += numOfDiscount * discount.discountPrice;
                int remain = itemCnt % discount.numItem;
                total += remain * prices[item];
            } else {
                total += itemCnt * prices[item];
            }
        } else {
            total += itemCnt * prices[item];
        }
}

int Checkout::calculateTotal() {
    total = 0;
    for (map<string, int>::iterator itemIter = items.begin(); itemIter !=items.end(); itemIter ++) {
        string item = itemIter->first;
        int itemCnt = itemIter->second;
        calcaulteItem(item, itemCnt);
    }
    return total;
}

void Checkout::addDiscount(string item, int numItem, int discountPrice) {
    Discount discount;
    discount.numItem = numItem;
    discount.discountPrice = discountPrice;
    discounts[item] = discount;
}