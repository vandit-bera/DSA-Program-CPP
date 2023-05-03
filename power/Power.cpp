#include<iostream>
using namespace std;
int calculate(int, int);

int main(){
    int base, pow, result;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> pow;
    result = calculate(base, pow);
    cout << "Power is " << result;
    return 0;
}

int calculate(int base, int pow){
    if(pow != 0){
        return (base * calculate(base, pow-1));
    } else {
        return 1;
    }
}
