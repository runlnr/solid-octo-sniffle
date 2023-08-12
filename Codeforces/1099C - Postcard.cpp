#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
bool check(char p) {
    if(p == '?' || p == '*') return 1;
    return 0;
}
void solve(str s) {
    int n, word = 0;
    str after;
    cin >> n;

    for(int i = 0; i < s.size(); i++)
        if(!check(s[i])) word++;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '?' || s[i] == '*') continue;
        if(check(s[i+1]) && !(check(s[i])))
            if(word != n) {
                if(word > n) {word--;     continue;}
                else if(word < n && s[i+1] == '*') {
                    while(word < n) {
                        word++;
                        after += s[i];
                    }
                }
            }
        after += s[i];
    }
    if(word == n) cout << after << endl;
    else cout << "Impossible" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    solve(s);
    return 0;
}
