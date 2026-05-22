/* 

Enter the count5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count,number = 1;
    cout<<"Enter the count";
    cin>>count;

    for (int i = 0; i <count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<number<<" ";
            number++;
        }

        cout<<"\n";

    }
    
    
    return 0;
}