#include<bits/stdc++.h>
using namespace std;

int main(){
    string inp;
    getline(cin,inp);
    map<string, int> mp;
    stringstream os(inp);
    for (string var; os >> var;){
        mp[var]++;
    }
    string out="";
    for(auto i:mp){
        int j = i.second;
        while (j--)
        {
            out += i.first + " ";
        }
    }
    cout << out;
}