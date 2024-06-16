/* =================================================================================================================== */
/* 
    Question  : Replace pi (recursive)
                Given a string, compute recursively a new string 
                where all appearances of "pi" have been replaced by "3.14".

                Do this recursively. Indexing in the array starts from 0.
        
                Constraints :  1 <= |S| <= 50
                                where |S| represents the length of string S. 
                Sample Input 1 : xpix      
                Sample Output 1 : x3.14x
                Sample Input 2 : pipi 
                Sample Output 2 : 3.143.14
                Sample Input 3 : pip 
                Sample Output 3 : 3.14p

*/


// // Change in the given string itself. So no need to return or print anything
// #include "iostream"

// #include "bits/stdc++.h"
// void replacePi(char input[]) {
// 	// Write your code here
// 	if ( input[0] == '\0' ) {
// 		return;
// 	}

// 	if ( input[0] == 'p' && input[1]== 'i' ) {
// 		input[0] = '3';
// 		input[1] = '.';
// 	}

// 	int  size = strlen( input );
// 	for ( int i = size + 2; i > 1; i-- ) {
// 		input[i] = input[ i - 2 ];
// 	}

// 	input[2] = '1';
// 	input[3] = '4';

// 	replacePi( input + 1 );
// }

#include <bits/stdc++.h>
using namespace std;
// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
  // Write your code here
  if (input[0] == '\0')
    return;
  if (input[0] == 'p' && input[1] == 'i') {
    input[0] = '3';
    input[1] = '.';

    int size = strlen(input);
    for (int i = size + 2; i > 1; i--) {
      input[i] = input[i - 2];
    }
    input[2] = '1';
    input[3] = '4';
  }

  replacePi(input + 1);
}

//#include "solution.h"
#include <iostream>
using namespace std;

int main() {
  char input[100];
  cin.getline(input, 100);
  replacePi(input);
  cout << input << endl;
}