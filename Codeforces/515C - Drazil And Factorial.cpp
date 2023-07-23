
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
str check(char p) {
    string s;
    s += p;
    if(p == '4') return "322";
    if(p == '6') return "53";
    if(p == '8') return "7222";
    if(p == '9') return "7332";
    return s;

}
bool comp(int a, int b) {
    return a > b;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    vector<int> vc;
    for(int i = 1; i <= t; i++) {
        char p;     cin >> p;
        if(p - '0' >= 2) {
            str tranf = check(p);
            for(int i = 0; i < tranf.size(); i++) {
                int y = tranf[i] - '0';
                vc.pback(y);
            }
        }
    }
    sort(vc.begin(), vc.end(), comp);
    for(int i = 0; i < vc.size(); i++) cout << vc[i];


    return 0;
}

