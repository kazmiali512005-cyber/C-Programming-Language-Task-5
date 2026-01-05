#include <iostream>
using namespace std;

int main() {

    int attendance = 80;
    bool feePaid = true;

    cout << ( (attendance >= 75) && (feePaid == true) 
            ? "Eligible" 
            : "Not Eligible" );

    return 0;
}
