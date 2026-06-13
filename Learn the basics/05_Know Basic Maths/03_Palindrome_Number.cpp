
/* 
Source Link :   =   https://takeuforward.org/data-structure/check-if-a-number-is-palindrome-or-not/
*/

#include<bits/stdc++.h>

using namespace std;

int reverseNumber(int number){
    
    int revNum = 0 ;
    while (number > 0)
    {
        int lastdigit = number % 10 ;

        revNum = (revNum * 10)+ lastdigit;

        number /= 10;
    }
    return revNum;
}

int main(){
    system("cls");

    int number;

    cout<<"Enter The Number : = ";
    cin>>number;
    
    int rev = reverseNumber(number);

    cout << (rev == number ? "The number is palindrome."
                           : "The number is not palindrome.");

    return 0;
}