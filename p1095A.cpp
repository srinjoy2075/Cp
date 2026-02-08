#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    string ans="";
    for(int i=0,k=1;i<t;i+=k,k++)
    {
        ans+=s[i];
    }
    cout << ans << endl;
    return 0;
}