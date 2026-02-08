#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int l = -1, r = -1;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '1') { l = i; break; }

        for(int i = s.size() - 1; i >= 0; i--)
            if(s[i] == '1') { r = i; break; }

        if(l == -1 || l == r) {
            cout << 0 << "\n";
            continue;
        }

        int cnt = 0;
        for(int i = l + 1; i < r; i++)
            if(s[i] == '0') cnt++;

        cout << cnt << "\n";
    }
    return 0;
}
