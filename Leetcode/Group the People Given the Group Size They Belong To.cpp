class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int idx = 0, temp = 0, cur = -1;
        vector<vector<int>> ans;
        vector<int> ilicku;

        pair<int, int> vc[500];

        for(int i = 0; i < groupSizes.size(); i++) {
            vc[i].first = groupSizes[i];
            vc[i].second = i;
        }

        sort(vc, vc+groupSizes.size());
        cur = vc[0].first;

        for(int i = 0; i < groupSizes.size(); i++) {
            if(cur != vc[i].first || temp == vc[i].first) {
                idx++;  temp = 0;
                cur = vc[i].first;
                ans.push_back(ilicku);
                ilicku.clear();
            }
            if(temp < vc[i].first) {
                temp++;
                ilicku.push_back(vc[i].second);
            }

        }
        ans.push_back(ilicku);
        return ans;
    }
};
