#include<bits/stdc++.h>
using namespace std;

int main(){
    string inp,out="";
    getline(cin,inp);
    for(int i=0;i<inp.size();){
        string temp="";
        while(isalpha(inp[i])){
            temp+=inp[i++];
        }
        int count=0;
        while(isdigit(inp[i])){
            count=count*10+inp[i++]-'0';
        }
        while(count--){
            out+=temp;
        }
    }
    cout<<out;
}