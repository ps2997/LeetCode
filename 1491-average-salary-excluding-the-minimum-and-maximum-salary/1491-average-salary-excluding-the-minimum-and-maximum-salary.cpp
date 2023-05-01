class Solution {
public:
    double average(vector<int>& salary) {
        
        double avg = 0;
        int n = salary.size();
        
        sort(salary.begin(), salary.end());
        
        salary[0] = 0;
        salary[n-1] = 0;
        
        
        for(int i=0; i<n; i++){
            avg+=salary[i];
        }
        
        return (avg)/(n-2);

    }
};