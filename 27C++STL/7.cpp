#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
// C++ STL Complete Tutorial | Standard Template Library - One Shot

// Sequential containers

    // Map

    map<string,int> m;
    m["key1"] = 1;
    m["key2"] = 2;
    m["key3"] = 3;
    m["key5"] = 5;
    m["key4"] = 4;
    m.insert({"key6",6});
    for(auto p:m){
        cout << p.first <<" - " << p.second << endl;
    }
    
    cout << m.count("key1");
    if(m.find("key6") != m.end()){
        cout<<"found";
    }else{
        cout<<"not found";
    }

    // Other Maps -> Multi Map and Unordered Map

        // Multi map
        multimap<string,int> multi;
        multi.emplace("key",1);
        multi.emplace("key",2);
        multi.emplace("key",3);
        multi.emplace("key",5);
        multi.emplace("key",4);

        multi.erase("key");
        
        for(auto p:multi){
            cout << p.first <<" - " << p.second << endl;
        }

        // Unordered Map
        unordered_map<string,int> umap;

        umap.emplace("key1",1);
        umap.emplace("key2",2);
        umap.emplace("key3",3);
        umap.emplace("key5",5);
        umap.emplace("key4",4);

        for(auto p:umap){
            cout << p.first <<" - " << p.second << endl;
        }

    return 0;
}