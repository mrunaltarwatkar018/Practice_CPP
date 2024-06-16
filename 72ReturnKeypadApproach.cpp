/* =================================================================================================================== */
/* 
    Question  : Return Keypad Code
                Given an integer n, using phone keypad find out all the 
                possible strings that can be made using digits of input n.
                Return empty string for numbers 0 and 1.
                Note : 1. The order of strings are not important.
                       2. Input and output has already been managed 
                          for you. You just have to populate the output 
                          array and return the count of elements populated 
                          in the output array.

                Do this recursively. Indexing in the array starts from 0.

                Input format : Integer n 
                Output Format : All possible strings in different lines
                Constraints : 1 <= n <= 10^6 
                Sample Input 1 : 23   
                Sample Output 1 :   ad
                                    ae
                                    af
                                    bd
                                    be
                                    bf
                                    cd
                                    ce
                                    cf

*/

// #include<iostream>
// using namespace std;

// #include <iostream>
// #include <string>
// #include <unordered_map>

// using namespace std;
// #include <string>
// using namespace std;

// string pad(int key) {
//   unordered_map<int, string> dial;
//   dial[0] = "";
//   dial[1] = "";
//   dial[2] = "abc";
//   dial[3] = "def";
//   dial[4] = "ghi";
//   dial[5] = "jkl";
//   dial[6] = "mno";
//   dial[7] = "pqrs";
//   dial[8] = "tuv";
//   dial[9] = "wxyz";

//   return dial[key];
// }

// int keypad(int num, string output[]){
//     /* Insert all the possible combinations of the integer number into the output string array. You do not need to
//     print anything, just return the number of strings inserted into the array.
//     */
//     if (num == 0) {
//       output[0] = "";
//       return 1;
//     }
//     int smallOutSize = keypad(num / 10, output);

//     string pd = pad(num % 10);
//     int newsize = pd.size() * smallOutSize;
//     // Copy
//     string temp[10000];
//     for (int i = 0; i < 10000; i++) {
//         temp[i] = output[i];
//     }
        
//     for (int i = 0; i < pd.size(); i++) {
//         for (int j = 0; j < smallOutSize; j++) {
//             output[j + i * smallOutSize] = temp[j] + pd[i];
//         }
//     }
//     return newsize;
// }


// #include <iostream>
// #include <string>
// // #include "solution.h"
// using namespace std;

// int main(){
//     int num;
//     cin >> num;

//     string output[10000];
//     int count = keypad(num, output);
//     for(int i = 0; i < count && i < 10000; i++){
//         cout << output[i] << endl;
//     }
//     return 0;
// }



// another way to solve the problem

#include<iostream>
using namespace std;

string getString( int d ) {
    if ( d == 2 ) {
        return "abc";
    }
    if ( d == 3 ) {
        return "def";
    }
    if ( d == 4 ) {
        return "ghi";
    }
    if ( d == 5 ) {
        return "jkl";
    }
    if ( d == 6 ) {
        return "mno";
    }
    if ( d == 7 ) {
        return "pqrs";
    }
    if ( d == 8 ) {
        return "tuv";
    }
    if ( d == 9 ) {
        return "wxyz";
    }
    return " ";
}

int keypad( int input, string output[] ) {
    if ( input == 0 ) {
        output[0] == "";
        return 1;
    }

    int lastDigit = input % 10;
    int smallNumber = input / 10;
    int samllOutputSize = keypad(smallNumber, output);
    string options = getString(lastDigit);

    for ( int i = 0; i < options.length() - 1; i++ ) {
        for ( int j = 0; j < samllOutputSize; j++ ) {
            output[ j + ( i + 1) * samllOutputSize] = output[j];
        }
    }

    int k = 0;
    for ( int i = 0; i < options.length(); i++ ) {
        for ( int j = 0; j < samllOutputSize; j++ ) {
            output[k] = output[k] + options[i];
            k++;
        }
    }

    return samllOutputSize * options.length();
}

int main() {
   int n;
   cin >> n;
   string output[1000];
   int count = keypad( n, output );
   for ( int i = 0; i < count; i++ ) {
    cout << output[i] << endl;
   }
}