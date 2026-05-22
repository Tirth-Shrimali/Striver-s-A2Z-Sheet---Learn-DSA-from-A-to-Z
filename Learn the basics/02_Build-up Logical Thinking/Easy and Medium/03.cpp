
/* 


Enter the count:= 5

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count;

    cout<<"Enter the count:= ";
    cin>>count;
    
    for (int i = 0; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}