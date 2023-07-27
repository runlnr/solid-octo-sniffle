
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7;
//chetmeorroiroiorr
ll n, k;

void solve(int n) {
    vector<int> vc(n);
    int moves = 0, alice = 0, bob = 0;

    for(int i = 0; i < n; i++) cin >> vc[i];

    int left = 0, right = n-1, temp = 1;
    while(left <= right) {
        int coll = 0;
        if(moves % 2 == 0) {
            while(coll < temp && left <= right) {
                coll += vc[left];   alice += vc[left];
                ++left;
            }
            temp = coll + 1;
            moves++;
        }
        else {
            while(coll < temp && left <= right) {
                coll += vc[right];  bob += vc[right];
                --right;
            }
            temp = coll + 1;
            moves++;
        }
    }
    cout << moves << sp << alice << sp << bob << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        cin >> n;   solve(n);
    }
    return 0;
}

