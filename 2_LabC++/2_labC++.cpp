#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,z;
    cout << "Input x: ";
    cin >> x;
    if (x <= 999) {
        cout << "Input x > 999";
    }
    else {
       z=x/100%10;
    cout << "Result z: " << z << endl;
    }
    return 0;
}
