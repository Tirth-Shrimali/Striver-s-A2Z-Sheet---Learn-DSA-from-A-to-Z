/* 

Enter the count := 5
1        1
12      21
123    321
1234  4321
1234554321

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    int count;
    
    cout<<"Enter the count := ";
    cin>>count;

    int space = 2*(count-1);
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        
        for (int j = 1; j <= space; j++)
        {

            cout<<" ";
        }
        
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<"\n";
        space -= 2;
    }
    

    return 0;
}