/* 
Source Link :   =   https://takeuforward.org/data-structure/print-all-divisors-of-a-given-number/

    Time Complexity
        O(sqrt(N) + K log K)

    Space Complexity
        O(K)
*/
#include<bits/stdc++.h>
using namespace std;

void divisiors(int number){ //O(N)
    for (int i = 1; i < number; i++)
    {
        if( number % i == 0){
            cout<<i<<"\n";
        }
    }
}

void divisior(int number){  //  
    
    vector<int> ls;
    for (int i = 1; i*i <= number; i++){  //  OR  i< sqrt(number) this also works but not use for better time complexity 
        if( number % i == 0){
            ls.push_back(i);

            if( number / i != i){
                ls.push_back(number/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout<<it<<" ";
}

int main(){
    system("cls");
    
    int number;

    cout<<"Enter the number";
    cin>>number;

    // divisiors(number);
    divisior(number);
    return 0;
}