#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float x;
// Функция
float function() {
    float fx;
   for(x=1;x<=5;x+=0.2)
    {
        /*cout << " I " << "x = "<< setw(11) << x << " I ";
        cout << setw(4) << "f(x) = " << setw(11)<< fx << " I " << endl;*/
        return fx = 3*log(fabs(x)) + sqrt((fabs(sin(x)) - cos(2*x)));
    }
}
// Процедура
void result() {
    cout << " Function value table y=f(x) with for() " << endl
<< " |--------------------------------------|" << endl
<< " |        x        |       y=f(x)       |" << endl
<< " |-----------------|--------------------|" << endl
<< " I " << "x = "<< setw(11) << x << " I "
<< setw(4) << "f(x) = " << setw(11) << function() << " I " << endl
<< " |-----------------|--------------------| " << endl << endl << endl;
}
int main(){
    result();
    return 0;
}
