class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0, sz = nums.size(); 
        
        vector<int>pref(k, 0);
        
        // int [] mods
        int sum=0;
        pref[0]++;
        
        for(int i=0; i<sz; i++){
            sum+= nums[i];
            int rem = (sum%k+k)%k;
            count+= pref[rem];
            pref[rem]++;
        }
        return count;
    }
};