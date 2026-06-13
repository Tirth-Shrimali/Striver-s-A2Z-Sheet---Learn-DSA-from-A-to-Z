
/* 
Source Link :   =   https://takeuforward.org/maths/check-if-a-number-is-armstrong-number-or-not/

    Time Complexity
        O(log10(N))

    Space Complexity
        O(1)
*/

#include<bits/stdc++.h>

using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int number){

    int originalNum = number;
    int digits =0 ;
    int sum = 0 ;
    
    while (number) {
        digits++;
        number /= 10;
    }

    number = originalNum;

    while (number) {
        int digit = number % 10;
        sum += (int)power(digit, digits);
        number /= 10;
    }

    return sum == originalNum;

}

int main(){
    system("cls");
    int number;
    cout << "Enter The Number : ";
    cin >> number;
    
    cout << (isArmstrong(number)
                ? "Armstrong Number"
                : "Not Armstrong Number");

    return 0;
}