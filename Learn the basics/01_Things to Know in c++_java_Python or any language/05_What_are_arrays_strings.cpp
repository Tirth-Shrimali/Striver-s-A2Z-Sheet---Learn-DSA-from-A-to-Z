/* 
SOurce Link : = https://takeuforward.org/data-structure/what-are-arrays-strings
*/




#include<iostream>
#include<string>
using namespace std;

int main(){
    system("cls");
    
    //? 1D Array

    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // arr[4]+=5;
    // cout<<arr[4];

    //? 2D Array

    // int arr[3][3];
    // arr[1][3] = 78;
    // cout<<arr[1][3];

    //? Strings

    string s = "Tirth";
    int len = s.size();
    cout<<len;
    s[len-1]= 'a';//replace with a 
    cout<<s[len-1];
    
    return 0;
}





/* 
Finding the Length of a String
*/
// #include <bits/stdc++.h>
// using namespace std;

// // Class containing the method to find string length
// class Solution {
// public:
//     // Function to return length of a string
//     int findLength(string s) {
//         // Return length using built-in function
//         return s.length();
//     }
// };

// // Driver code
// int main() {
//     system("cls");
//     // Create object of Solution class
//     Solution obj;

//     // Input string
//     string s = "Hello World";

//     // Call function and print result
//     cout << obj.findLength(s) << endl;
    
//     return 0;
// }







/* 
Accessing Individual Characters
*/

// #include <bits/stdc++.h>
// using namespace std;

// // Class containing the method to access characters
// class Solution {
// public:
//     // Function to print each character of a string
//     void accessCharacters(string s) {
//         // Loop through each index
//         for (int i = 0; i < s.length(); i++) {
//             // Print the character at index i
//             cout << s[i] << endl;
//         }
//     }
// };

// // Driver code
// int main() {
//     // Create object of Solution class
//     Solution obj;
//     // Input string
//     string s = "Hello";
//     // Call the function
//     obj.accessCharacters(s);
//     return 0;
// }







/* 
Passing, Returning, and Assigning Strings
*/
// #include <bits/stdc++.h>
// using namespace std;

// // Solution class containing modifyString function
// class Solution {
// public:
//     // Function to modify the string
//     string modifyString(string str) {
//         // Assign str to a new variable
//         string newStr = str;

//         // Modify the new string
//         newStr[0] = 'H';

//         // Return the modified string
//         return newStr;
//     }
// };

// int main() {
//     // Original string
//     string original = "hello";

//     // Create object of Solution class
//     Solution sol;

//     // Call modifyString and store the result
//     string modified = sol.modifyString(original);

//     // Print both strings
//     cout << "Original String: " << original << endl;
//     cout << "Modified String: " << modified << endl;

//     return 0;
// }






/* 
String Comparison
*/
// #include <bits/stdc++.h>
// using namespace std;

// // Class containing the compareStrings function
// class Solution {
// public:
//     // Function to compare two strings
//     bool compareStrings(string str1, string str2) {
//         // Return true if strings are equal
//         return str1 == str2;
//     }
// };

// // Main function
// int main() {
//     // Create object of Solution class
//     Solution obj;

//     // Input first string
//     string str1;
//     cin >> str1;

//     // Input second string
//     string str2;
//     cin >> str2;

//     // Compare strings and print result
//     if (obj.compareStrings(str1, str2))
//         cout << "Strings are equal";
//     else
//         cout << "Strings are not equal";

//     return 0;
// }
