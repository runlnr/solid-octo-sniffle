#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    char direc;		cin >> direc;
    str ar[4];
    ar[1] = "qwertyuiop", ar[2] = "asdfghjkl;", ar[3] = "zxcvbnm,./";

    str s;	cin >> s;
    for(int i = 0; i < s.size(); i++) {
    	for(int j = 1; j <= 3; j++) {
    		for(int k = 0; k < ar[j].size(); k++) {
    			if(ar[j][k] == s[i]) {
    				if(direc == 'R') cout << ar[j][k-1];
    				else cout << ar[j][k+1];
    			}
    		}
    	}
    }
    return 0;
}

