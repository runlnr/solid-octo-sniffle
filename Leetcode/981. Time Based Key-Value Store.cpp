class TimeMap {
private: 
    map<string, vector<string>> mp;
    map<string, vector<int>> pos;

    string bns(vector<int> &pos, vector<string> &mp, int timestamp) {
        int l = 0, r = mp.size()-1, ans = 0;
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(pos[mid] < timestamp) {l = mid+1;    ans = mid;}
            else if(pos[mid] > timestamp) r = mid-1;
            else if(pos[mid] == timestamp) {
                ans = mid;  break;
            }
        }
        return r >= 0 ? mp[ans] : "";
    }
public:
    TimeMap() {
        
    }
    void set(string key, string value, int timestamp) {
        mp[key].push_back(value);
        pos[key].push_back(timestamp);
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end()) return "";
        return bns(pos[key], mp[key], timestamp);
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
