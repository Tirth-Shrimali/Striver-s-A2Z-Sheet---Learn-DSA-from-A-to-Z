/* 
Source Link :   =   https://takeuforward.org/data-structure/factorial-of-a-number-iterative-and-recursive

    Time Complexity
    O(n)

    Space Complexity
    O(n) (recursion stack)
*/

#include <bits/stdc++.h>
using namespace std;

int fact = 1;
int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    system("cls");
    
    int n;

    cout<<"Enter N : = ";
    cin >> n;

    cout << "Factorial of "<< n <<" is : = " << factorial(n);

    return 0;
}