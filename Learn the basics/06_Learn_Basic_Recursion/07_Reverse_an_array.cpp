/* 
Source Link :   =   https://takeuforward.org/data-structure/reverse-a-given-array/

    Time Complexity
        O(n)

    Space Complexity
        O(n) (recursion call stack)
*/

#include <bits/stdc++.h>
using namespace std;

void reverseAnArray(int i, int arr[], int n){
    if( i >= n){
        return ;
    }
    swap(arr[i], arr[n]);
    reverseAnArray(i+1, arr ,n-1);
}

int main() {
    system("cls");
    
    int n;

    cout<<"Enter N : = ";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Array of "<<i+1<<"is : = ";
        cin>> arr[i];
    }
    
    reverseAnArray(0, arr, n-1);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}