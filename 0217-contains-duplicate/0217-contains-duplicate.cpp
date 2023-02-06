class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int>mp;
        
        for(auto it:nums){
            if(mp.find(it)== mp.end()){
                mp[it]++;
            }
            else return true;
        }
        return false;
        
    }
};