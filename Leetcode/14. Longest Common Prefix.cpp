class Solution {
public:
    string longestCommonPrefix(vector<string>& vc) {
        int lowest = 300, pos = 0;
        for(int i = 0; i < vc.size(); i++) {
            if(lowest > vc[i].size()) {
                pos = i;    lowest = vc[i].size();
            }
        }
        string org = vc[pos];
        for(int i = 0; i < vc.size(); i++) {
            string mob = vc[i], temp;
            for(int j = 0; j < min(mob.size(), org.size()); j++) {
                if(mob[j] == org[j]) temp += mob[j];
                else {org = temp;    break;}
            }
        }
        return org;
    }
};
