#include <iostream>
using namespace std;
int main(){
    int S1 = 0, S2 = 0, S_min = 0;
    const int arraySize = 20;
    int numbers[arraySize];//{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout << "Input: " << endl;
    for(int k = 0; k < 20; k++) {
        cin >> numbers[k];
    }
    for(int k = 0; k < 5; k++) {
        S1+=numbers[k];
    }
    for(int k = 15; k < 20; k++){
        S2+=numbers[k];
    }
    S_min = (S1<S2) ? S1 : S2;
    cout << "Вывод S1 = " << S1 << endl;
    cout << "Вывод S2 = " << S2 << endl;
    cout << "Вывод S_min = " << S_min << endl;
    return 0;
}// сделать процедуры и функции