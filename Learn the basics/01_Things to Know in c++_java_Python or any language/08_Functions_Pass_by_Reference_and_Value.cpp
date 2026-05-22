#include<iostream>
#include<string>
using namespace std;

void modifyValue(int a) {
    a = a + 10;
}
void modifyReference(int &a) {
    a = a + 10;
}

void printName(string name){
    cout<<"Hey "<<name<<endl;
}

int sum(int a, int b){
    return a + b;
}

int maximum(int x1, int y1){
    if (x1>=y1)
    {
        return x1;
    }else{
        return y1;
    }
}

void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout<<"the value inside function"<<arr[0]<<endl;
}

int main(){
    system("cls");
    


    // Pass by Value


    int x = 5;
    modifyValue(x);
    cout << x << endl; // Output: 5

    // Pass by Reference

    int y = 5;
    modifyReference(y);
    cout << y << endl; // Output: 15



    string name;
    cin>>name;
    printName(name);
    cout<<"\n\n";


    string name2;
    cin>>name2;
    printName(name2);
    cout<<"\n\n";


    int a,b;
    cin>>a>>b;
    int result = sum(a,b);
    cout<<"The sum of two number is : "<<result;
    cout<<"\n\n";

    int x1,y1;
    cin>>x1>>y1;
    int max = maximum(x1,y1);
    cout<<"max is "<<max;
    cout<<"\n\n";


    //! Looping the array

    int n = 5;
    int arr[n];

    for (int i = 0; i <=n; i++)
    {
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout<<"the value inside int main: "<<arr[0]<<endl;

    /* 
    Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.


        Example 1

        Input: n=5, arr = [1,2,3,4,5]
        Output: [5,4,3,2,1]
        Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

        Example 2

        Input: n=6, arr = [1,2,1,1,5,1]
        Output: [1,5,1,1,2,1]
        Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].
    */
    
    return 0;
}



