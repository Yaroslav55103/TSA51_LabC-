#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float y;
    for (float i=1; i<=10;i+=0.5) {
        y=sin(i);
        cout << "sin(" << i <<")=" << y << endl;
    }
}
