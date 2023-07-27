#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
void solve(int t) {
    while(t--) {
        int n, x, total = 0, org = 0;   cin >> n >> x;
        vector<int> vc;
        for(int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            vc.pback(temp);
            total += temp;
        }
        org = total;

        int i = 0, j = n-1, cnt = 0;
        if(total % x != 0) {cout << n << endl;  continue;}

        while(org % x == 0 && i < n) {
            org -= vc[i];   i++;    cnt++;
        }
        int temp = 0;
        while(total % x == 0 && j >= 0) {
            total -= vc[j];     j--;
            temp++;
        }
        total = n - min(temp, cnt);
        if(total > 0) cout << total << endl;
        else cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    int t;  cin >> t;
    solve(t);
    return 0;
}
