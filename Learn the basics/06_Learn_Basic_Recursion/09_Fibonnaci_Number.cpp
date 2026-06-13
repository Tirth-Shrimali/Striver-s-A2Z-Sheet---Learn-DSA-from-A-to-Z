/* 
Source Link :   =   https://takeuforward.org/arrays/print-fibonacci-series-up-to-nth-term/

Time Complexity
    O(2^n)

Space Complexity
    O(n) (recursion call stack)
*/

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;

    int prev2 = 0, prev1 = 1;

    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {

    system("cls");

    int num;
    cout << "Enter num : = ";
    cin>>num;

    cout << fibonacci(num);
    
    return 0;
}