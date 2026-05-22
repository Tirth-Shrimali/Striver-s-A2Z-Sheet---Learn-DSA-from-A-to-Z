/* 
Source LInk :=  https://takeuforward.org/switch-case/switch-case-statements
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    
    //  SHEET QUESTION
    
    /*Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.
    
    Ensure only the 1st letter of the answer is capitalised.
    
    Example 1
    
    Input: day = 3
    Output: Wednesday
    
    Example 2
    
    Input: day = 8
    Output: Invalid */

    /* 
    Take the day no and print the corresponding day 
    for 1 print moday
    for 2 print tuesday and so on for 7 print sunday
    */
    int day;

    // Prompt user to enter a number between 1 and 7
    cout << "Enter a number (1-7): ";
    cin >> day;

    // Switch statement to determine the day
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break; // Exit switch after matching case
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            // Executed if input is not between 1 and 7
            cout << "Invalid" << endl;
    }



    // Define two constant integers
    const int x = 10;
    const int y = 5;

    // Evaluate the sum of x and y using a switch statement
    switch (x + y) {
        case 15: // If the sum equals 15
            cout << "\n\nResult is 15." << endl;
            break; // Exit the switch block
        case 20: // If the sum equals 20
            cout << "\n\nResult is 20." << endl;
            break; // Exit the switch block
        default: // If no case matches
            cout << "\n\nNo match found." << endl;
    }



    // Define a character variable representing a grade
    char grade;

    cout<<"\n\nEnter Grade [A-B] := ";
    cin>>grade;
    
    // Evaluate grade using a switch statement
    switch (grade) {
        case 'A': // If grade is 'A'
            cout << "Excellent!" << endl;
            break; // Exit switch after this case
        case 'B': // If grade is 'B'
            cout << "Good!" << endl;
            break; // Exit switch after this case
        default: // If no case matches
            cout << "Not specified." << endl;
    }




    
    return 0;
}