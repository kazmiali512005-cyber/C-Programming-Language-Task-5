#include <iostream>
using namespace std;

int main() {

    int fuel = 20;

    fuel -= 2;   // Trip 1
    fuel -= 2;   // Trip 2

    cout << "Remaining Fuel = " << fuel;

    return 0;
}
