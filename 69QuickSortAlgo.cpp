#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/* =================================================================================================================== */
/* 
    Question  : Quick Sort Code
                Sort an array A using Quick Sort.
                Change in the input array itself. 
                So no need to return or print anything.

                Do this recursively.
        
                Input format :  Line 1 : Integer n i.e. Array size
                                Line 2 : Array elements (separated by space)
                Output Format : Array elements in increasing order (separated by space)
                Constraints :   1 <= n <= 10^3

                Sample Input 1 : 6 
                                 2 6 8 5 4 3
                Sample Output 1 : 2 3 4 5 6 8

                Sample Input 2 :  5
                                  1 5 2 7 3
                Sample Output 2 : 1 2 3 5 7 
*/


/*
	To apply the method explained in the hint video, 
    we have to add two more parameters in the function 
    call. This can be done by calling a helper function 
    from given function. The helper function can have 
    three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/

// int Partition(int a[], int l, int u) {
//   int pivot = a[u];
//   int pIndex = l;

//   for (int i = l; i < u; i++) {

//     if (pivot > a[i]) {
//       int temp = a[pIndex];
//       a[pIndex] = a[i];
//       a[i] = temp;
//       pIndex++;
//     }
//   }
//   int temp = a[pIndex];
//   a[pIndex] = a[u];
//   a[u] = temp;
//   return pIndex;
// }

// void qS(int a[], int l, int u) {
//   if (l < u) {
//     int pIndex = Partition(a, l, u);
//     qS(a, l, pIndex - 1);
//     qS(a, pIndex + 1, u);
//   }
// }

// void quickSort(int input[], int size) {
//   /* Don't write main().
//      Don't read input, it is passed as function argument.
//      Change in the given array itself.
//      Taking input and printing output is handled automatically.
//   */
//   qS(input, 0, size - 1);
// }


/* ================================================================================================================================ */
#include<iostream>
using namespace std;

// int partitionArray( int input[], int start, int end ) {
//     // chose pivot
//     int pivot = input[ start ];

//     // count elements smaller than pivot and swap
//     int count = 0;
//     for ( int i = start + 1; i <= end; i++ ) {
//         if ( input[i] <= pivot ) {
//             count++;
//         }
//     }
//     int pivotIndex = start + count;
//     int temp = input[ start ];
//     input[ start ] = input[ pivotIndex ];
//     input[ pivotIndex ] = temp;

//     // ensure left half contains elements smaller than pivot
//     // and right half larger
//     int i = start, j = end;
//     while ( i <= pivotIndex && j >= pivotIndex ) {
//         while ( input[i] <= pivot ) {
//             i++;
//         }

//         while ( input[j] > pivot ) {
//             j--;
//         }

//         if ( i < pivotIndex && j > pivotIndex ) {
//             int temp = input[i];
//             input[i] = input[j];
//             input[j] = temp;
//             i++;
//             j--;
//         }
//     }
//     return pivotIndex;
// }

// void quickSort( int input[], int start, int end ) {
//     if ( start >= end ) {
//         return;
//     }

//     int pivotIndex = partitionArray( input, start, end );
//     quickSort( input, start, pivotIndex - 1 );
//     quickSort( input, pivotIndex + 1; end );
// }

// void quickSort ( int input[], int n ) {
//     quickSort( input, 0, n - 1 );
// }

// int main() {
//     //int n;
//     int a[] = { 6, 5, 4, 3, 2, 1 };
//     quickSort(a, 0, 5);

//     // print 
//     for ( int i = 0; i < 6; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;

// }



/* ================================================================================================================================ */
int partition( int a[], int startIndex, int endIndex ) {
    int pivot = a[startIndex];
    int countSmallerElements = 0;
    for ( int i = startIndex + 1; i <= endIndex; i++ ) {
        if ( a[i] <= pivot ) {
            countSmallerElements++;
        }
    }
    int pivotIndex = countSmallerElements + startIndex;
    a[startIndex] = a[pivotIndex];
    a[pivotIndex] = pivot;

    int i = startIndex;
    int j = endIndex;
    while ( i < pivotIndex && j > pivotIndex ) {
        if ( a[i] <= pivot ) {
            i++;
        } else if ( a[j] > pivot ) {
            j--;
        } else {
            int temp = a[i];
            a[i] = a[j];
            a[j] =temp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quick_sort( int a[], int startIndex, int endIndex ) {
    // base case
    if ( startIndex >= endIndex ) {
        return;
    }

    int p = partition( a, startIndex, endIndex );
    quick_sort( a, startIndex, p - 1 );
    quick_sort( a, p + 1, endIndex );
}

int main() {
    int a[] = {5, 8, 7, 2, 3, 1, 9};
    quick_sort(a, 0, 6);
    for ( int i = 0; i < 7; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}