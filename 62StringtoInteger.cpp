/* =================================================================================================================== */
/* 
    Question  : String to Integer
                Write a recursive function to convert a given string into 
                the number it represents. That is input will be a numeric 
                string that contains only numbers, you need to convert the 
                string into corresponding integer and return the answer.

                Do this recursively. Indexing in the array starts from 0.

                Input format : Numeric string S (string, Eg. "1234")
                Output Format : Corresponding integer N (int, Eg. 1234)
                Constraints :  1 <= |S| <= 9
                                where |S| represents the length of string S. 
                Sample Input 1 : 00001231     
                Sample Output 1 : 1231
                Sample Input 2 : 12567
                Sample Output 2 : 12567

*/

#include <iostream>
// #include "solution.h"
using namespace std;

#include <cstring>
int stringToNumber(char input[])
{
    // Write your code here
    static int sum = 0;
    int l = strlen(input);
    sum = sum * 10 + (input[0] - 48);
    if (input[1] != '\0')
        stringToNumber(input + 1);
    else
        return sum;
}


int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}