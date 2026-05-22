
/* 

Enter the count:= 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count;

    cout<<"Enter the count:= ";
    cin>>count;
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    

    return 0;
}