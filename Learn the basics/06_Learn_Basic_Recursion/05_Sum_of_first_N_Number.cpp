/* 
Source Link :   =   https://takeuforward.org/data-structure/sum-of-first-n-natural-numbers/

    Time Complexity
    O(n)

    Space Complexity
    O(n) (recursion call stack)
*/

#include <bits/stdc++.h>
using namespace std;

void sumOfN(int n, int sum) {
    if (n == 0) {
        cout <<"Sum is : = "  << sum;
        return;
    }

    sumOfN(n - 1, sum + n);
}

int main() {
    int n;

    cout<<"Enter N : = ";
    cin >> n;

    sumOfN(n, 0);
    return 0;
}