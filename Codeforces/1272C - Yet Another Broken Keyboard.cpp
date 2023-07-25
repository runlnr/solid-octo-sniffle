
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
const ll MOD = 1e9+7;
int n, m;
vector<int> vc[30];
vector<int> after;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        char p;     cin >> p;
        vc[p-'a'].pback(i);
    }

    while(m--) {
        char temp;    cin >> temp;
        int idx = temp - 'a';
        after.reserve(vc[idx].size());
        after.insert(after.end(), vc[idx].begin(), vc[idx].end());
    }
    sort(after.begin(), after.end());

    ll ans = 0, temp = 1;
    for(int i = 0; i < after.size(); i++) {
        if(i == 0) {ans += 1;   temp++;}
        else if(abs(after[i] - after[i-1]) == 1) {
            ans += temp;   ++temp;
        }
        else {
            temp = 1;   ans += temp;
            temp++;
        }
    }
    cout << ans<< endl;
    return 0;
}

