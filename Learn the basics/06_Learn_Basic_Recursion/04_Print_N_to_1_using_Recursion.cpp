/* 
Source Link :   =   https://takeuforward.org/recursion/print-n-to-1-using-recursion/
*/

#include <bits/stdc++.h>
using namespace std;

void printNumber(int n){
    if(n < 1){
        return;
    }

    cout << n << "\n";

    printNumber(n-1);
}

int main() {
    system("cls");
    
    int n;

    cout<<"Enter N := ";
    cin>>n;

    printNumber(n);

    return 0;
}