/* 
Source Link :   =   https://takeuforward.org/data-structure/find-gcd-of-two-numbers/

    Time Complexity
        O(log(min(a, b)))

    Space Complexity
        O(1)
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2) {
    int ans = 1;

    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            ans = i;
        }
    }

    return ans;
}

int main() {

    system("cls");
    
    int n1, n2;
    cout<<"Number 1 : = ";
    cin >> n1;
    cout<<"Number 2 : = ";
    cin >> n2;

    cout << gcd(n1, n2);

    return 0;
}