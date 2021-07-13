
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
protected:
    map<string, int> prices;
    int total;
};