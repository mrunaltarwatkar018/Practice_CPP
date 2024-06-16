#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* =================================================================================================================== */
/* 
    Question  : Replace Character Recursively 
                Given an input string S and two characters c1 and c2, you
                need to replace every occurrence of character c1 with 
                character c2 in the given string.

                Do this recursively.
        
                Input format : 
                                Line 1 : Input String S
                                Line 2 : Character c1 and c2 (separated by space)
                Output Format : Updated string
                Constraints :   1 <= Length of String S <= 10^6
                Sample Input 1 : abacd
                                 a x
                Sample Output 1 : xbxcd

*/

void replaceCharacter(char input[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output. 
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */

     if ( input[0] == '\0' ) {
         return;
     }

     input[0] = ( input[0] == c1 ) ? c2 : input[0];
     replaceCharacter( input + 1, c1, c2 );
}



void replaceCharactersss( char input[], char c1, char c2 ) {
    if ( input[0] == '\0' ) {
        return;
    }

    if ( input[0] == c1 ) {
        input[0] = c2;
    }

    replaceCharactersss( input + 1, c1, c2 );
}


int main() {
    char str[100];
    cout << "Input string s : ";
    cin >> str;

    char c1, c2;
    cout << "Characters c1 and c2 : ";
    cin >> c1 >> c2;

    replaceCharacter(str, c1, c2);
    cout << "After replacing the character c1 with c2 : " << str << endl;
    
    replaceCharactersss(str, c1, c2);
    cout << "After replacing the character c1 with c2 : " << str << endl;
}