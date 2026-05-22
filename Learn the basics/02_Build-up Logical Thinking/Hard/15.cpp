/* 

Enter the count5
A B C D E 
A B C D 
A B C 
A B 
A 

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count;
    char ch ;
    cout<<"Enter the count";
    cin>>count;
    
    for (int i = 0; i <count; i++)
    {
        ch  = 'A';
        for (int j = count; j > i; j--)
        {
            cout<<ch<<" ";
            ch++;
        }

        cout<<"\n";

    }
    
    return 0;
}