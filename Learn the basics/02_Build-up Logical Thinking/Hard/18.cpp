/* 
Enter the count5
E 
D E 
C D E 
B C D E 
A B C D E 

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
        for (char ch = 'E' - i;ch <='E';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}