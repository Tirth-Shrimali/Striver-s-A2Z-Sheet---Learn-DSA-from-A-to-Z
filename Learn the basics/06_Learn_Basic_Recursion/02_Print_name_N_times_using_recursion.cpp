/* 
    Source Link :   =   https://takeuforward.org/recursion/print-name-n-times-using-recursion/

    Time Complexity = O(n)

    Space Complexity = O(n)
    
*/

#include <bits/stdc++.h>
using namespace std;

void name(int i,int n){
    if(i > n){
        return;
    }

    cout<<"Tirth\n";

    name(i+1,n);
}

int main() {
    system("cls");
    
    int n;

    cout<<"Enter N := ";
    cin>>n;

    name(1,n);

    return 0;
}