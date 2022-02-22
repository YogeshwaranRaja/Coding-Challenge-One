#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    getline(cin, inp);
    stringstream os(inp);
    string out = "";
    int maxsize = 0;
    for (string var; os >> var;)
    {
        if (var.size()>maxsize){
            maxsize = var.size();
            out = var;
        }
    }
   
    cout << out<<" "<<maxsize;
}