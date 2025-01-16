#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// String Compression problem - Lecture 32 | Leetcode 443

int compress(vector<char> &chars){
    int idx = 0, n = chars.size();

    for(int i=0;i<n;i++){
        char ch=chars[i];
        int count=0;

        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }else{
            chars[idx++]=ch;
            string str = to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main()
{
    vector<char> s = {'a','a','b','b','c','c','c',};
    cout << compress(s) << endl;

    return 0;
};