#include <iostream>
#include <string>
using namespace std;
// Valid Palindrome | Strings Part 2 | DSA Placement Series
bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <='9') || (tolower(ch)>='a' && tolower(ch)<='z'))
    {
        return true;
    }
    return false;
}

bool isPallindrome(string s)
{
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        if (isAlphaNum(!s[st]))
        {
            st++;
            continue;
        }
        if (isAlphaNum(!s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main()
{
    string s = "Ac3?e3c&a";
    cout << isPallindrome(s) << endl;

    return 0;
};
