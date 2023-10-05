#include <bits/stdc++.h>
#define endl "\n"
#define sp ' '

using namespace std;
typedef string str;     typedef long long ll;
int checkchar(char s) {
    if(s >= 65 && s <= 90) return 1;
    if(s >= 97 && s <= 122) return 2;
    return 0;
}
str trans(str s) {
    for(int i = 0; i < s.size(); i++)
        s[i] += 32;
    return s;
}
void solve(str s) {
    bool flag1 = 1, flag2 = 1;
    for(int i = 0; i < s.size(); i++)
        if(s[i] < 65 || s[i] > 90)
            flag1 = 0;
    int jj = checkchar(s[0]);
    for(int i = 1; i < s.size(); i++)
        if(checkchar(s[i]) == jj)
            flag2 = 0;
    if(flag2) {
    for(int i = 0; i < s.size(); i++) {
        if(i == 0 && s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
        if(i >= 1 && s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
    }
    if(flag1)
        s = trans(s);
    cout << s << endl;
}
int main() {
	//freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    str s;  cin >> s;
    solve(s);
    return 0;
}
