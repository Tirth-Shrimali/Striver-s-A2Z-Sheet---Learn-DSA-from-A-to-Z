/* 
Source Link :   =   https://takeuforward.org/data-structure/check-if-a-number-is-prime-or-not/

    Time Complexity
        O(sqrt(N))

    Space Complexity
        O(1)
*/
#include<bits/stdc++.h>

using namespace std;

    
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }

    return true;

}

int main(){
    system("cls");
    
    int number;

    cout<<"Enter the number : = ";
    cin>>number;

    cout << (isPrime(number) ? "Prime Number" : "Not Prime Number");
    
    return 0;
}