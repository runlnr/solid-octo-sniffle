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
vector<int> vc[N];
void solve(int n) {
    if(n % 2 != 0) cout << "NO";
    else {
        str s;  cin >> s;
        int ans = 0, min_num = INT_MAX, open = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {ans++;    open++;}
            else if(s[i] == ')') ans--;
            min_num = min(ans, min_num);
        }
        if(open == n/2) {
            if(min_num+1 == 0 || min_num == 0) cout << "YES";
            else cout << "NO";
        }
        else cout << "NO";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
