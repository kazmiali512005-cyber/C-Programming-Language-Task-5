#include <iostream>
using namespace std;

int main() {

    float balance = 1000;
    float recharge = 500;

    balance += recharge;        // add recharge
    balance += balance * 0.10;  // add 10% bonus

    cout << "Updated Balance = " << balance;

    return 0;
}
