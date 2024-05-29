class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        while(true) {
            if(s.size() == 1) {
                if(s[0] == '1') return steps;
                else return steps+1;
            }

            if(s[s.size()-1] == '1') {
                int pointer = s.size()-1;
                bool flag = 0;
                string new_s;

                while(pointer >= 0) {
                    if(s[pointer] == '0') {
                        flag = true;    new_s = '1'+new_s;
                        break;
                    }
                    new_s += '0';
                    if(pointer == 0) break;
                    pointer--;
                }
                if(!flag) {
                    new_s = '1' + new_s;
                    s = new_s;
                }
                else if(flag) {
                    for(int i = pointer-1; i >= 0; i--)
                        new_s = s[i]+new_s;
                    s = new_s;
                }

            }
            else if(s[s.size()-1] == '0') {
                s.erase(s.size()-1, 1);
            }
            steps++;
        }
        return steps;
    }
};
