#include<iostream>
using namespace std;

void toh(int n, char from_rod, char to_rod, char aux_rod){
    if (n==1){
        cout << "Move Disc 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    toh(n-1, from_rod, aux_rod, to_rod);
    cout << "Move Disc " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    toh(n-1, aux_rod, from_rod, to_rod);
}

int main(){
    int n;
    cout << "Enter disc no. : ";
    cin >> n;
    toh(n, 'A', 'B', 'C');
    return 0;
}
