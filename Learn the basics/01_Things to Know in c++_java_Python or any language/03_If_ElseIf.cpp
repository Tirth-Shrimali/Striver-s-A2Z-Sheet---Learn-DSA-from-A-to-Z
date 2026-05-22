#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");

    int ages;
    cout<<"Enter ages : ";
    cin>>ages;
    if(ages > 18){
        cout<<"You are an Adult\n\n";
    }else{
        cout<<"You are not an adult !!!\n\n";
    }



    /*
    A school has following rules for grading system :
    a.  below 25 - F
    b.  25 to 44 - E
    c.  45 to 48 - D
    d.  50 to 59 - C
    e.  60 to 79 - B
    f.  80 to 100- A
    */

    // Declare and initialize marks variable
    int marks;
    cout<<"Input : marks = ";
    cin>>marks;
    // Check grade conditions using if-else ladder
    if (marks < 25) {
        cout << "Grade: F" << endl;  // Less than 25 is Grade F
    } else if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;  // Between 25 and 44 is Grade E
    } else if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;  // Between 45 and 49 is Grade D
    } else if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;  // Between 50 and 59 is Grade C
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;  // Between 60 and 69 is Grade B
    } else if (marks >= 70) {
        cout << "Grade: A" << endl;  // 70 and above is Grade A
    } else {
        cout << "Invalid marks entered." << endl;  // Handles unexpected cases
    }



    /* 
    Take the age from the user and then decude accordingly 
    1.  If age < 18
            print ->    not eligible for job
    2.  if age >= 18 and age <= 54,
            print -> "eligible for job"
    3.  if age >= 55 and age <= 57,
            print -> "eligible for job , but retirenmnet soon"
    4.  if age >57
            print -> "retirenment time"

    */

    int age;
    cout<<"\n\nEnter the age :=  ";
    cin>>age;

    if(age < 18){
        cout<<"not eligible for job";
    }else if(age <=54){
        cout<<"eligible for job";
    }
    else if(age <=57){
        cout<<"eligible for job";
        if (age>= 55){
            cout<<", but retirenmnet soon";
        }
    }else{
        cout<<"retirenment time";
    }


    //  SHEET QUESTION  :   =

    /*Given marks of a student, print on the screen:

    Grade A if marks >= 90
    Grade B if marks >= 70
    Grade C if marks >= 50
    Grade D if marks >= 35
    Fail, otherwise.


    Example 1

    Input: marks = 95
    Output: Grade A
    Explanation: marks are greater than or equal to 90.

    Example 2

    Input: marks = 14
    Output: Fail
    Explanation: marks are less than 35. */

    int mark;
    cout<<"\n\nInput : mark = ";
    cin>>mark;

    if(mark >= 90){
        cout<<"Output : Grade A";
    }else if(mark >= 70){
        cout<<"Output : Grade B";
    }else if(mark >= 50){
        cout<<"Output : Grade C";
    }else if(mark >= 35){
        cout<<"Output : Grade D";
    }else{
        cout<<"Fail";
    }
        
    return 0;
}