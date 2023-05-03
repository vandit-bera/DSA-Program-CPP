#include<iostream>
using namespace std;

int fact(int n){
    int result = 1;
    for (int i=2; i<=n; i++){
        result *= i;
    }
    return result;
}

int combination(int n, int r){
    return ( fact(n) / (fact(r) * fact(n-r)) );
}

int main(){
    int n,r;
    cout << "Enter a N number : ";
    cin >> n;
    cout << "Enter a R number : ";
    cin >> r;
    cout << "Answer is " << combination(n, r);
    return 0;
}
