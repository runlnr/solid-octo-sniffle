class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size(), div, temp, cur;
        map<int, int> mp;
        if(n % groupSize != 0) return false;

        div = n/groupSize;
        for(int i = 0; i < n; i++) {
            mp[hand[i]]++;
            if(mp[hand[i]] > div) return false;
        }
        sort(hand.begin(), hand.end());

        while(hand.size() > 0) {
            temp = 1;   cur = hand[0];
            hand.erase(hand.begin());
            for(int i = 0; i < hand.size(); i++) {
                if(temp == groupSize) break;
                while(hand[i] != cur+1 && i < hand.size()) {
                    if(hand[i] > cur+1) return false;
                    i++;
                }
                if(i == hand.size()) {
                    i--;
                    if(hand[i] != cur+1) return false;
                }
                cur = hand[i];
                hand.erase(hand.begin()+i);
                i--;

            temp++;

            }
        }
        return true;
    }
};
