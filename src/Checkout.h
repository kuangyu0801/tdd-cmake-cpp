
#include <string>
#include <map>
using namespace std;
class Checkout {
public:
    // constructor
    Checkout();
    // destructor
    virtual ~Checkout();
    void addItemPrice(string item, int price);
    void addItem(string item);
    int calculateTotal();
    void addDiscount(string item, int numItem, int discountPrice);
    void calcaulteItem(string item, int itemCnt);
protected:
    struct Discount{
        int numItem;
        int discountPrice;
    };
    map<string, int> prices;
    map<string, Discount> discounts;
    map<string, int> items;
    int total;
};