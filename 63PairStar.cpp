/* =================================================================================================================== */
/* 
    Question  : Pair Star
                Given a string S, compute recursively a new string where 
                identical chars that are adjacent in the original string 
                are separated from each other by a "*".

                Do this recursively. Indexing in the array starts from 0.

                Input format : String S 
                Output Format : Modified string
                Constraints :  1 <= |S| <= 1000
                                where |S| represents the length of string S. 
                Sample Input 1 : hello    
                Sample Output 1 : hel*lo
                Sample Input 2 : aaaa
                Sample Output 2 : a*a*a*a

*/


#include <iostream>
// #include "solution.h"
using namespace std;


// Change in the given string itself. So no need to return or print the changed string.

int length(char input[]) {
  int len = 0;
  for (int i = 0; input[i] != '\0'; i++) {
    len++;
  }
  return len;
}

void pairStar(char input[], int start) {
  if (input[start] == '\0') {
    return;
  }

  pairStar(input, start + 1);
  if (input[start] == input[start + 1]) {
    int l = length(input);
    input[l + 1] = '\0';
    int i;
    for (i = l - 1; i > start; i--) {
      input[i + 1] = input[i];
    }
    input[start + 1] = '*';
  }
}

void pairStar(char input[]) {
    // Write your code here
    pairStar(input, 0);
}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}