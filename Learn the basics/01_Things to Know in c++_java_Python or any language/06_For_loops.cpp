/* 
Source Link : = https://takeuforward.org/for-loop/understanding-for-loop
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    


    int choice;
    cout<<"Enter the choice:= ";
    cin>>choice;
    for (int i = 0; i < choice; i++)
    {
        cout<<"Tirth\t";
    }
    

    cout<<"\n\n";
    for (int i = 1; i <= 10; i++) {
        cout << "Hey, Tirth, this is the " << i << "'th iteration" << endl;
    }
    

    cout<<"\n\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }




    //  SHEET QUESTION
    /* 
    Given two integers low and high, return the sum of all integers from low to high inclusive.


        Example 1

        Input: low = 1, high = 5
        Output: 15
        Explanation: 1 + 2 + 3 + 4 + 5 = 15

        Example 2

        Input: low = 3, high = 7
        Output: 25
        Explanation: 3 + 4 + 5 + 6 + 7 = 25
    */
    int low,high,output=0;
    cout<<"\n\nInput: low = ";
    cin>>low;
    cout<<"Input: high = ";
    cin>>high;

    for (int i = low; i <= high; i++)
    {
        output += i;
    }
    cout<<"Output : "<<output;

    return 0;
}