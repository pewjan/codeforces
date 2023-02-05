class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        map<int, pair<int, set<pair<int, int>>>> m;
        unordered_set<int> used;
        int ans = 0;
        for(auto &e: events){
            m[e[0]].first++;
            m[e[0]].second.insert(make_pair(e[0], e[1]))
            m[e[1]+1].second--;
            m[e[1]+1].second.insert(make_pair(e[0], e[1]))
        }
        int total = 0;
        for(int i = 1; i < 100000; ++i){
            total+=m[i];
            if(total > 0){
                ans++;
                t
            }
        }
        if (ans >= events.size()){
            return events.size(); 
        }else{
            return ans;
        }
    }
};