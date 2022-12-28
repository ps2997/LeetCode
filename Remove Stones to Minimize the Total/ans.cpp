class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum = 0;


        for(auto i:piles){
            pq.push(i);
        }

        while(k--){
            int val = pq.top();
            pq.pop();
            val = val - floor(val/2);

            // priority heap will always keep the max element at the top
            pq.push(val);
        }


        while(!pq.empty()){
            sum+= pq.top();
            pq.pop();
        }

        return sum;

    }
};
