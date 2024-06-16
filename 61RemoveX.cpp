/* =================================================================================================================== */
/* 
    Question  : Remove X (recursive)
                Given a string, compute recursively a new string 
                where all 'x' chars have been removed.

                Do this recursively. Indexing in the array starts from 0.
                Input format : String S
                Output Format : Modified String
                Constraints :  1 <= |S| <= 10^3
                                where |S| represents the length of string S. 
                Sample Input 1 : xaxb      
                Sample Output 1 : ab
                Sample Input 2 : abc 
                Sample Output 2 : abc
                Sample Input 3 : xx 
                Sample Output 3 : 

*/

#include <iostream>
// #include "solution.h"
using namespace std;



void removeX(char input[]) {
  // Write your code here
  // Write your code here
  if (input[0] == '\0')
    return;
  if (input[0] != 'x') {
    removeX(input + 1);
  } else {
    int i = 1;
    for (; input[i] != '\0'; i++) {
      input[i - 1] = input[i];
    }
    input[i - 1] = input[i];
    removeX(input);
  }
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}