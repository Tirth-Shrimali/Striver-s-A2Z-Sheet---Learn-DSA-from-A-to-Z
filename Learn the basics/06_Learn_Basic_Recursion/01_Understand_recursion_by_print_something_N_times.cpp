
/* 
Source  Link    :   =   https://takeuforward.org/recursion/introduction-to-recursion-understand-recursion-by-printing-something-n-times

    Time Complexity =   O(n) 

    Space Complexity    =   O(n)  Recursion stack
*/

#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    if (i > n) return;

    cout << "Tirth" << "\n";
    printName(i + 1, n);
}

int main() {
    system("cls");
    
    int n;

    cout<<"Enter N : = ";
    cin >> n;

    printName(1, n);
    return 0;
}
