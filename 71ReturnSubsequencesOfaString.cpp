#include<iostream>
#include<string>
using namespace std;


/* =================================================================================================================== */
/* 
    Question  : Subseuences
                
                Sample Input 1 :    abc      
                Sample Output 1 :   
                                    c
                                    b
                                    bc
                                    a
                                    ac
                                    ab
                                    abc
                

*/

int subs(string input, string output[]) {
	if (input.empty()) {
		output[0] = "";
		return 1;
	}

	string smallString = input.substr(1);
	int smallOutputSize = subs(smallString, output);
	for (int i = 0; i < smallOutputSize; i++) {
		output[i + smallOutputSize] = input[0] + output[i];
	}
	return 2 * smallOutputSize;
}

int main() {
	string input;
    cout << "Enter the INPUT : ";
	cin >> input;
	string* output = new string[1000];
	int count = subs(input, output);
    cout << "Output : ";
	for (int i = 0; i < count; i++) {
		cout << output[i] << endl;
	}
}