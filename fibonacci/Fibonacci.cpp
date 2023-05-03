#include<iostream>
using namespace std;

int fib(int num){
    if((num == 0) || (num == 1)){
        return (num);
    } else {
        return (fib(num-1) + fib(num-2));
    }
}
int main(){
    // if you print all pair
    int count, i=0;
    cout << "Enter count value: ";
    cin >> count;
    while (i < count){
        cout << " " << fib(i);
        i++;
    }

    // if you need only last element
    // int count, last, i=0;
    // cout << "Enter count value: ";
    // cin >> count;
    // while (i < count){
        // last = fib(i);
        // i++;
    // }
    // cout << last;

    // if you need sum of all pair
    // int count, sum=0, i=0;
    // cout << "Enter count value: ";
    // cin >> count;
    // while (i < count){
        // sum += fib(i);
        // i++;
    // }
    // cout << sum;

    return 0;
}
