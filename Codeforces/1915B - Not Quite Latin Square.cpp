#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        bool flaga, flagb, flagc;
        char p;

        for(int i = 0; i < 3; i++) {
            flaga = 0, flagb = 0, flagc = 0;
            for(int j = 0; j < 3; j++) {
                cin >> p;
                if(p == 'A') flaga = 1;
                else if(p == 'B') flagb = 1;
                else if(p == 'C') flagc = 1;
            }
            if(!flaga) cout << 'A' << endl;
            else if(!flagb) cout << 'B' << endl;
            else if(!flagc) cout << 'C' << endl;
        }
    }
    return 0;
}
