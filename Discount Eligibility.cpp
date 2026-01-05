#include <iostream>
using namespace std;

int main() {

    int purchaseAmount = 6000;
    bool membershipCard = false;

    cout << ( (purchaseAmount > 5000) || (membershipCard == true)
            ? "Discount Applied"
            : "No Discount" );

    return 0;
}
