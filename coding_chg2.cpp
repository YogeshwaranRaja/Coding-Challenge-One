#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp, out = "";
    getline(cin, inp);
    for (int i = 0; i < inp.size();)
    {
        int ind = i;
        int count = 0;
        while (i<inp.size() && inp[i]==inp[ind])
        {
            i++;
            count++;
        }
        out += inp[ind];
        out+=to_string(count);
    }
    cout << out;
}