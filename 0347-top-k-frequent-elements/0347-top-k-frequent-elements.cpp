class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){
            pq.push({i.second,i.first});
        }
        vector<int>ans;
        while(k-- && !pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};