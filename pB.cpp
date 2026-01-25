#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0;i<n;i++)
        {
            cin >> p[i];
        }

        for(int i=0;i<n;i++)
        {
            int want=n-i;
            if(p[i] != want)
            {
                int pos=i;
                while(p[pos]!=want)
                {
                    pos++;
                }
                reverse(p.begin()+i,p.begin()+pos+1);
                break;
            }
        }

        for(int i=0;i<n;i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}