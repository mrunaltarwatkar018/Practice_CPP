/* =================================================================================================================== */
/* 
    Question  : Print Keypad Combinations Code
                Given an integer n, using phone keypad find out and print 
                all the possible strings that can be made using digits of
                input n.

                Note :  The order of strings are not important. 
                        Just print different strings in new lines.

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


// #include <iostream>
// #include <string>
// using namespace std;

// #include <iostream>
// #include <string>
// #include <unordered_map>

// using namespace std;

// string dial(int key) {
//   unordered_map<int, string> m;
//   m[0] = "";
//   m[1] = "";
//   m[2] = "abc";
//   m[3] = "def";
//   m[4] = "ghi";
//   m[5] = "jkl";
//   m[6] = "mno";
//   m[7] = "pqrs";
//   m[8] = "tuv";
//   m[9] = "wxyz";
//   return m[key];
// }
// void pK(int num, string out) {

//   if (num == 0) {
//     cout << out << endl;
//     return;
//   }
//   string pd = dial(num % 10);
//   for (int i = 0; i < pd.size(); i++) {
//     pK(num / 10, pd[i] + out);
//   }
// }

// void printKeypad(int num){
//     /*
//     Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
//     */
//     pK(num, "");
// }


// int main(){
//     int num;
//     cin >> num;

//     printKeypad(num);

//     return 0;
// }





// Another method

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

void printKeypad( int n, string outputSoFar ) {
    if ( n == 0 ) {
        cout << outputSoFar << endl;
        return;
    }

    int lastDigit = n % 10;
    int smallNumber = n / 10;
    string options = getString( lastDigit );
    for ( int i = 0; i < options.size(); i++ ) {
        printKeypad( smallNumber, options[i] + outputSoFar );
    }
}

int main() {
    int n;
    cin >> n;
    printKeypad( n, "");
}