#include<iostream>
using namespace std;


/* Given an array A, check wheather if the A is sorted or not */

// bool is_sorted2 ( int a[], int size ) {
//     if ( size == 0 || size == 1 ) {
//         return true;
//     }

//     bool isSmallerOutput = is_sorted ( a + 1, size - 1 );

//     if ( !isSmallerOutput ) {
//         return false;
//     } 

//     if ( a[0] > a[1] ) {
//         return false;
//     } else {
//         return true;
//     }
// }


// bool is_sorted ( int a[], int size ) {
//     if ( size == 0 || size == 1 ) {
//         return true;
//     }

//     if ( a[0] > a[1] ) {
//         return false;
//     }

//     bool isSmallerSorted = is_sorted ( a + 1, size - 1 );
//     return isSmallerSorted;
//     /*if ( isSmallerSorted ) {
//         return true;
//     } else {
//         return false;
//     }*/

// }

// int main() {
//     is_sorted2 ( 4, 5);
// }


/* =================================================================================================================== */
/* 
    Question 1 : Sum of Arrya 
                Given an array of length N, you need to find and return the 
                sum of all elements of the array.
                Do this recursively.
        
                Input format : 
                                Line 1 : An Integer N i.e. size of array
                                Line 2 : N integers which are elements of the array, 
                                         separated by spaces
                Output Format : Sum
                Constraints :   1 <= n <= 10^3
                Sample Input 1 : 3
                                 9 8 9
                Sample Output 1 : 26
                Sample Input 2 : 3
                                 4 2 1
                Sample Output 2 : 7
*/


// Time Complexity : O(n)
// Space Complexity : O(n)
// where n is size of input array


// int sum(int input[], int n) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Return output and don't print it.
//      Taking input and printing output is handled automatically.
//   */
//   int sum = 0;
//   for (int i = 0; i < n; i++) {
//     sum += input[i];
//   }
//   return sum;
// }

// int sum1 ( int input[], int n ) {
//     if ( n == 0 ) {
//         return 0;
//     }
//     return input[0] + sum1(input + 1, n - 1 );
// }


// int main() {

// }

/* =================================================================================================================== */
/* 
    Question 2 : Check Number 
                Given an array of length N and an integer x, you need to 
                find if x is present in the array or not. Return true or false.
                Do this recursively.
        
                Input format : 
                                Line 1 : An Integer N i.e. size of array
                                Line 2 : N integers which are elements of the array, 
                                         separated by spaces
                                Line 3 : Integer x
                Output Format : 'true' or 'false'
                Constraints :   1 <= n <= 10^3
                Sample Input 1 : 3
                                 9 8 10
                                 8
                Sample Output 1 : true
                Sample Input 2 : 3
                                 9 8 10
                                 2
                Sample Output 2 : false
*/

// bool checkNumber(int input[], int size, int x) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Return output and don't print it.
//      Taking input and printing output is handled automatically.
//   */
//   for (int i = 0; i < size; i++) {
//     if (input[i] == x) {
//       return true;
//     }
//   }
//   return false;
// }


// bool checkNumber1 ( int input[], int size, int x ) {
//     if ( size == 0 ) {
//         return false;
//     } else if ( input[0] == x ) {
//         return true;
//     }

//     return checkNumber1(input + 1, size - 1, x );
// }

// int main() {

// }

