/* 

Enter the count:= 5
A 
B B 
C C C 
D D D D 
E E E E E 

*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count;
    
    cout<<"Enter the count:= ";
    cin>>count;

    char ch = 'A';

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    
}