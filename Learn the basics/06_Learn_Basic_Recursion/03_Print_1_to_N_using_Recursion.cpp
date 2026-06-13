/* 
Source Link :   =   https://takeuforward.org/recursion/print-1-to-n-using-recursion/

    Time Complexity =   O(n)

    Space Complexity    =   O(n) (recursive call stack)
*/

#include <bits/stdc++.h>
using namespace std;

void printNumber(int i, int n){
    if( i > n ){
        return;
    }

    cout<<i<<"\n";

    printNumber(i+1,n);
}

int main() {
    system("cls");
    
    int n;

    cout<<"Enter N := ";
    cin>>n;

    printNumber(1,n);

    return 0;
}