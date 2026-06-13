/* 
Source Link :   =   https://takeuforward.org/data-structure/check-if-the-given-string-is-palindrome-or-not/

    Time Complexity
        O(n)

    Space Complexity
        O(n) (recursion call stack)
*/

#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s){
    
    if( i >= s.size()/2){
        return true;
    }

    if(s[i] != s[s.size()-i-1]){
        return false;
    }

    return palindrome(i+1, s);
}

int main() {
    system("cls");
    
    string s;
    cout<<"Enter the string : = ";
    cin>>s;

    bool ans = palindrome(0, s);

    if( ans == 1 ){
        cout << "This is palindrome .";
    }else{
        cout << "This is not palindrome .";
    }

    return 0;
}