#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> nums;
    for(auto it: s)
    {
        if(it!='+')
            nums.push_back(it);
    }
    sort(nums.begin(),nums.end());
    string ans;
    for(int i=0;i<nums.size();i++)
    {
        ans=ans+nums[i];
        if(i!=nums.size()-1)    ans+='+';
    }
    cout << ans;
}