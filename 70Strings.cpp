#include<iostream>
using namespace std;

int main() {
    string s = "abc";
    string s1;
    s1 = "def";
    cout << s << endl;
    cout << s1 << endl;


    string * sp = new string; //dynamically allocation of string
    *sp = "def";
    cout << sp << endl;
    cout << *sp << endl;

    string s2;
    cout << "Enter the string : ";
    //cin >> s2;
    getline(cin, s2);
    cout << "Output : " << s2 << endl;

    s2 = "fedfed";

    cout << s[0] << endl;
    s[0] = 'a';


    string s3 = s1 + s2;   // concatination
    cout << s3 << endl;

    s += s1;
    cout << s1 << endl;
    cout << s << endl;



    cout << s.size() << endl;  // size or length
    cout << s.substr(3) << endl;  // substr( starting_index)
    cout << s.substr(3, 3) << endl; // substr( starting_index, length)


    cout << s.find("def") << endl;
 }