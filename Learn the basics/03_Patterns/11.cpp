
/* 

Enter the count:= 5
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

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
        int start = 1;

        if(i % 2 == 0){
            start = 1;
        }
        else{
            start = 0;

        }
        for (int j = 0; j <= i; j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        
            cout<<"\n";

    }
     
    return 0;
}