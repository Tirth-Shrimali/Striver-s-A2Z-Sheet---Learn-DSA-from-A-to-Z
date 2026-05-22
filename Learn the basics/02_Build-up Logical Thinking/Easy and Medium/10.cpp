
/* 
Enter count5
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count;

    cout<<"Enter count ";
    cin>>count;

    for (int i = 1; i <= 2*count-1; i++)
    {
        int stars = i;
        if(i > count) stars = 2*count - i;
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    
    return 0;
}