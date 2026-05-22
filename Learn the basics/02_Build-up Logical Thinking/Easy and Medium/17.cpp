/* 

Enter the choice:=  5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count ;

    cout<<"Enter the count";
    cin>>count;

    for (int i = 0; i < count; i++)
    {
        
        for (int j = 0; j < count-i-1; j++)
        {
            cout<<" ";
        }
        
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<ch;
            if(j < breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        
        for (int j = 0; j < count-i-1; j++)
        {
            cout<<" ";
        }

        cout<<"\n";
    }
    
    
    return 0;
}