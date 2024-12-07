#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A1,A2,A3;
    string z;
    cout << "Input A1: ";
    cin >> A1;
    cout << "Input A2: ";
    cin >> A2;
    cout << "Input A3: ";
    cin >> A3;
    (5<=A1 && A1<=10) ? cout << A1 << " A1 YES" << endl : cout << "A1 NO" << endl;
    (5<=A2 && A2<=10) ? cout << A2 << " A2 YES" << endl : cout << "A2 NO" << endl;
    (5<=A3 && A3<=10) ? cout << A3 << " A3 YES" << endl : cout << "A3 NO" << endl;
     return 0;
}
