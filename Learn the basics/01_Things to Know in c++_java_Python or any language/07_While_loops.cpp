#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    


     //? while loop

    // int i=1;
    // while (i<=5)
    // {
    //     cout<<"Tirth"<<endl;
    //     i++;
    // }



    int n = 5;
    int factorial = 1;

    while (n > 0) {
        factorial *= n;  //Keep finding factorial with n and decrement n 
        n--;
    }

    cout << "Factorial of 5 is: " << factorial << endl;
    


    /* 
    SHEET QUESTION

        Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.

        A number ends with digit d if its last digit is d.

            Example 1

            Input: d = 1
            Output: 12300

            Explanation:
            The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
            Their sum is 12300.


            Example 2

            Input: d = 5
            Output: 12450
    */
    int input,output=0,i=0;
    cout<<"Input : d = ";
    cin>>input;
    while (i < 50)
    {
        output += input;
        input += 10;
        i++;
    }
    
    cout<<"Output : "<<output;


    return 0;
}