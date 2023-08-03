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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll points[2], time[2];
    ll vas = 0, mis = 0;

    for(int i = 1; i <= 2; i++) cin >> points[i];
    for(int i = 1; i <= 2; i++) cin >> time[i];

    mis = max(3*points[1]/10, points[1] - (points[1]/250 * time[1]));
    vas = max(3*points[2]/10, points[2] - (points[2]/250 * time[2]));

    if(vas == mis) cout << "Tie" << endl;
    else if(vas > mis) cout << "Vasya" << endl;
    else cout << "Misha" << endl;

    return 0;
}

