class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        unordered_map<int, int>mp;
        
        for(auto it:nums){
            if(mp.find(it)!=mp.end()){
                mp.erase(it);
            }
            else{
                mp[it]++;
            }
        }
        int ans;
        for(auto it:mp){
            ans=it.first;
        }
        return ans;
    }
};