class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mxsum=INT_MIN, temp=0; 
        
        for(auto it:nums){
            temp+=it;
            mxsum = max(mxsum, temp);
            if(temp<0) temp=0;
            
        }
        return mxsum;
        
    }
};