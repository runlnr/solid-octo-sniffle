class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<map<int, int>> vc(words.size());
        vector<string> ans;
        int rep = INT_MAX;  char curChar = 'a';
        string str;


        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words[i].size(); j++) 
                vc[i][words[i][j]]++;
            
        }
        for(int i = 'a'; i <= 'z'; i++) {
            curChar = i, str = curChar;
            rep = INT_MAX;
            for(int j = 0; j < vc.size(); j++) {
                rep = min(rep, vc[j][i]);
            }

            for(int j = 0; j < rep; j++) {
                ans.push_back(str);
            }
        }
        return ans;
    }
};
