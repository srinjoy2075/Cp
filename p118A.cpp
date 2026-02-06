#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char &c : s) c = tolower(c);

    string ans = "";
    for (char c : s) {
        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y') {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;
    return 0;
}
