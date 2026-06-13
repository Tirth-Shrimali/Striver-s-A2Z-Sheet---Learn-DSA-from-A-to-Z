
/* 
Source Link :   =   https://takeuforward.org/data-structure/count-digits-in-a-number

    Time Complexity
        O(log10(N))

    Space Complexity
        O(1)
*/

#include<bits/stdc++.h>

using namespace std;

int countDigit(int number){
    
    if (number == 0) return 1;

    int cnt = 0;

    while (number > 0) {
        cnt++;
        number /= 10;
    }

    return cnt;
}

/* 
    Time Complexity
        O(1)

    Space Complexity
        O(1)
*/
int anotherTrick(int number){
    
    if (number == 0) return 1;

    return (int)log10(number) + 1;

}

int main(){
    system("cls");

    int number;
    cout<<"Enter The Number : = ";
    cin>>number;
    
    int answer=countDigit(number);

    int ans = anotherTrick(number);

    cout<<"\nThe number "<<number<<" [Original Trick] has "<<ans<<" digits.\n";
    cout<<"The number "<<number<<"  [Another Trick] has "<<ans<<" digits.";
    return 0;
}

