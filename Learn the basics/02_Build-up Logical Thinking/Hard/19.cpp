/* 

Enter the count := 5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/


 #include<iostream>
using namespace std;

int main() {
    system("cls");

    int count;
    cout << "Enter the count := ";
    cin >> count;

    // Upper Half
    for (int i = 1; i <= count; i++)
    {
        // Left stars
        for (int j = 1; j <= count - i + 1; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= count - i + 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    // Lower Half
    for (int i = 1; i <= count; i++)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (count - i); j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}