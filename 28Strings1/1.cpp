#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Strings & Character Arrays in C++ - Part 1 | DSA Placement Series

int main(){

    char str[100];
    cout << "Enter character array : ";
    cin.getline(str,100);
    cout <<"output : "<< str << endl;

    string str1 = "aman";
    string str2 = "aman";

    cout << (str1 == str2) << endl;

    cout << str1.length() << endl;

    string str3;
    cout << "Enter string : " << endl;
    getline(cin,str3);
    cout << str3 << endl;

    string str4 = "apna college.";
    reverse(str4.begin(),str4.end()); //iterators
    cout << str4 << endl;

return 0;
};
