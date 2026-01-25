#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        int d=s[i]-'0';
        int inv=9-d;
        if(i==0)
        {
        if(inv<d && inv!=0)
        {
            s[i]=inv+'0';
        }
        }
        else
        {
            if(inv<d)
                s[i]=inv+'0';
        }
    }
    cout << s << endl;
    return 0;
}