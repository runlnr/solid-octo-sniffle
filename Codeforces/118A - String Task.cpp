#include <bits/stdc++.h>
#define endl "\n"
#define sp ' '

using namespace std;
typedef string str;     typedef long long ll;
void solve(str s) {
    for(int i = 0; i < s.size(); i++) {
        char p = tolower(s[i]);
        if(p != 'a' && p != 'e' && p != 'o' && p != 'i' &&  p != 'u' && p != 'y') {
            cout << '.' << p;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    str s;  cin >> s;
    solve(s);
    return 0;
}
