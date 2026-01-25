#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,s,x;
        cin >> n >> s >> x;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            sum+=num;
        }
        if(sum>s)
            cout << "NO\n";
        else
        {
            long long diff=s-sum;
            if(diff%x==0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
