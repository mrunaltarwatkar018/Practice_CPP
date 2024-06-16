// PMI = Principle of Mathemathical Induction
// It is used for to prove some facts 

#include<iostream>
using namespace std;

// int factorial ( int n ) {
//     if ( n == 0 ) {
//         return 1;
//     }

//     int smallOutput = factorial ( n - 1 );
//     int output = n * smallOutput;
//     return output;
// }

// int main() {
//     int n; 
//     cout << "Enter the value of n : ";
//     cin >> n;
//     cout << factorial ( n ) << endl;
// }


/* ============================================================================================= */

/* 
    Question 1 : Power 
                Write a program to find x to the power n (i.e. x^n). 
                Take x and n from the user. You need to return the answer.
                Do this recursively.
                
                Input format : Two integers x and n (separated by space)
                Output Format : x^n (i.e. x raise to the power n)
                Constraints :   0 <= x <= 30
                                0 <= n <= 30
                Sample Input 1 : 3 4
                Sample Output 1 : 81
                Sample Input 2 : 2 5
                Sample Output 2 : 32
*/

// int power(int x, int n) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Return output and don't print it.
//      Taking input and printing output is handled automatically.
//   */
//   if (n == 0) {
//     return 1;
//   }
//   return (x * power(x, n - 1));
// }

// int main() {
//     int x, n; 
//     cout << "Enter the value of x and n : ";
//     cin >> x >> n;
//     cout << power ( x, n ) << endl;
// }



/* ============================================================================================= */

/* 
    Question 2 : Print Numbers 
                Given the number 'n', write a code to print numbers from 1 
                to n in increasing order recursively.
        
                Input format : Integer n
                Output Format : Numbers from 1 to n (separated by space)
                Constraints :   1 <= n <= 10000
                Sample Input 1 : 6
                Sample Output 1 : 1 2 3 4 5 6
                Sample Input 2 : 4 
                Sample Output 2 : 1 2 3 4
*/

// void print(int n){
//     //write your code here
//     if ( n == 1 ) {
//         cout << n << " ";
//     } else {
//         print( n - 1 );
//         cout << n << " ";
//     }
// }


// int main() {
//     int n; 
//     cout << "Enter the value of n : ";
//     cin >> n;
//     cout << "Print Numbers : ";
//     print(n); 
// }


/* ============================================================================================= */

/* 
    Question 3 : Number of Digits 
                Given the number 'n', find out and return the number of 
                digits present in a number recursively.
        
                Input format : Integer n
                Output Format : Count of digits
                Constraints :   1 <= n <= 10^6
                Sample Input 1 : 156
                Sample Output 1 : 3
                Sample Input 2 : 7 
                Sample Output 2 : 1
*/

// int count(int n){
//     //write your code here
//     static int ct = 0;

//     if (n > 0) {
//       ct++;
//       count(n / 10);
//     } else {
//       return ct;
//     }
// }

// int count ( int n ) {
//     if ( n < 10 ) {
//         return 1;
//     }
//     return 1 + count ( n / 10 );
// }

// int main() {
//     int n; 
//     cout << "Enter the value of n : ";
//     cin >> n;
//     cout << "Number of Digits : " << count(n); 
// }



