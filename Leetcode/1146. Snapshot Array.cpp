class SnapshotArray {
private: 
    map<int, vector<pair<int, int>>>mp;    
    int sn = 0;

    int bns(int index, int snap_id) {
        int l = 0, r = mp[index].size()-1;
        int ans = r;
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(mp[index][mid].first <= snap_id) {l = mid+1; ans = mid;}
            else r = mid-1;
        }
        if(r >= 0) return mp[index][ans].second;
        else return 0;
    }
public:
    SnapshotArray(int length) {}
    void set(int index, int val) {
        mp[index].push_back({sn, val});
    }

    int snap() {
        sn++;    return sn-1;
    }
    
    int get(int index, int snap_id) {
        return bns(index, snap_id);
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
