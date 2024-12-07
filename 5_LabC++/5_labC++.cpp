#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
float x,X,xn,xk,dx,fx,fy,e,K;

//Ввод переменных
cout << "Input xn: "; cin >> xn;
cout << "Input xk: "; cin >> xk;
cout << "Input step dx: "; cin >> dx;

//Вычисление формулы 3 циклами: for(),while(),do while()
cout << " Part 1 " << endl;
cout << " Function value table y=f(x) with for() " << endl
<< " |--------------------------------------|" << endl
<< " |        x        |       y=f(x)       |" << endl
<< " |-----------------|--------------------|" << endl;
for(x=xn;x<=xk;x+=dx)
{
    fx=3*log(fabs(x))+sqrt(fabs((sin(x))-cos(2*x)));
    cout << " I " << "x = "<< setw(11) << x << " I ";
    cout << setw(4) << "f(x) = " << setw(11)<< fx << " I " << endl;
}
    cout << " |-----------------|--------------------| " << endl << endl << endl;
cout << " Function value table y=f(x) with while() " << endl
<< " |--------------------------------------|" << endl
<< " |        x        |       y=f(x)       |" << endl
<< " |-----------------|--------------------|" << endl;
x=xn;
while (x<=xk) {
    fx=3*log(fabs(x))+sqrt(fabs((sin(x))-cos(2*x)));
    cout << " I " << "x = "<< setw(11) << x << " I ";
    cout << setw(4) << "f(x) = " << setw(11)<< fx << " I " << endl;
    x+=dx;
}
    cout << " |-----------------|--------------------|" << endl << endl << endl;

cout << " Function value table y=f(x) with do while() " << endl
<< " |--------------------------------------|" << endl
<< " |        x        |       y=f(x)       |" << endl
<< " |-----------------|--------------------|" << endl;
x=xn;
do {
    fx=3*log(fabs(x))+sqrt(fabs((sin(x))-cos(2*x)));
    cout << " I " << "x = "<< setw(11) << x << " I ";
    cout << setw(4) << "f(x) = " << setw(11)<< fx << " I " << endl;
    x+=dx;
}
while (x<=xk);
cout << " |-----------------|--------------------|" << endl << endl;

//Вычисление f(y) при помощи сложных циклов
cout << " Part 2 " << endl;
cout << " Function value table g=f(y) with two for() " << endl
<< " |--------------------------------------|" << endl
<< " |        X        |       y=f(y)       |" << endl
<< " |-----------------|--------------------|" << endl;
float sum=0;
for(X = 1.3; X < 1.8; X += dx) {
    e = 0.2;
    fy = 1; //при каждом прохождении цикла приводим значение к начальному к 1, чтобы избежать умножения на 0 и умножение на старые значения
    for(K = 2; K < 6; K++) {
        fy *= ((e + pow(X, 3)) / log(K)) * ((e + pow(X, 3)) / log(K));
    }
    sum+=fy;
    cout << " I " << "X = "<< setw(11) << X << " I ";
    cout << setw(4) << "f(y) = " << setw(11)<< fy << " I " << endl;
}
    cout << " |-----------------|--------------------| " << endl;
    cout << "Sum f(y) = " << sum << endl;
return 0;
}