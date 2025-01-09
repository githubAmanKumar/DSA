#include <iostream>
#include <string>
using namespace std;
// Remove all Occurrences | Strings Part 2 | DSA Placement Series

string removeOccurence(string s, string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurence(s, part) << endl;
    
    return 0;
};
