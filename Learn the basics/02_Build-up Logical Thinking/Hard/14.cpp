/* 

Enter the count5
A 
B C 
D E F 
G H I J 
K L M N O 

*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count;
    char ch  = 'A';
    cout<<"Enter the count";
    cin>>count;

     for (int i = 0; i <count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }

        cout<<"\n";

    }
    
    
    return 0;
}