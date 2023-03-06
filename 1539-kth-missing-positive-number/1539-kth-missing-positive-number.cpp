class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int ans, count=0, sz = arr.size();
        
        unordered_map<int, int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        int i=1;
        while(count<k){
            if(mp.find(i)==mp.end()){
                ans=i;
                count++;
            }
            if(count==k) return ans;
            i++;
        }
        return ans;
    }
};