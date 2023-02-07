class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int, int>>vec;
        int ind=0;
        
        for(auto it: nums){
            vec.push_back(make_pair(it, ind));
            ind++;
        }
        
        sort(vec.begin(), vec.end());
        vector<int>ans;
        
        int l=0, r=nums.size()-1;
        
        while(l<r){
            int sum = vec[l].first + vec[r].first;
            if(sum == target) {
                ans.push_back(vec[l].second);
                ans.push_back(vec[r].second);
                break;
            }
            else if(sum<target) l++;
            else r--;
        }
        return ans;
    }
};