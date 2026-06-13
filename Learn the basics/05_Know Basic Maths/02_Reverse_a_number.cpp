
/* 
Source Link :   =   https://takeuforward.org/maths/reverse-digits-of-a-number

    Time Complexity
        O(log10(N))

    Space Complexity
        O(1)
*/

#include<bits/stdc++.h>

using namespace std;

int reverseNumber(int number){
    
    int revNum = 0 ;
    
    while (number > 0){
        int lastDigit = number % 10 ;
        
        revNum = revNum * 10+ lastDigit;
        
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

    cout<<"\nThe original number is := "<<number<<"\nThe reverse number is := "<<rev;

    return 0;
}