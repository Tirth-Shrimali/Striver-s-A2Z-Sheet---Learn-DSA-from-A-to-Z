
/* 
Enter the count:= 5
      *      
     ***     
    *****    
   *******   
  *********  
  *********
   ******* 
    *****  
     ***   
      *    
*/

#include<iostream>
using namespace std;

int main() {
    system("cls");

    int count;

    cout << "Enter the count:= ";
    cin >> count;

    // Upper Pyramid
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    // Lower Pyramid
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * (count - i) - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}