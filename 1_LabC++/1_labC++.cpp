#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float y,z,a,b,x;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input x: ";
    cin >> x;
    z=cos(a)*cos(b)*cos(x);
    y=1./4*fabs(cos(a+b-x)+cos(b+x-a)+cos(x+a-b)+cos(a+b+x));
    cout << "Result z: " << z << endl;
    cout << "Result y: " << y << endl;
    cout << "The difference between y and z: " << y-z << endl;
    return 0;
}
