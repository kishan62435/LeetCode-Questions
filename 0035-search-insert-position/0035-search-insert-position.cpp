class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        
        int sz = nums.size();
        
        if(target<nums[0]) return 0;
        if(target>nums[sz-1]) return sz;
        int l=0, r=sz-1, mid=l+r/2;
        
        // sort(nums.begin(), nums.end());
        // int prev=INT_MIN;
        
        while(l<=r){
            // if(nums[mid]<=target) prev=mid;
            if(nums[mid]== target) return mid;
            else if(nums[mid]>target) r--;
            else l++;
            mid=l+r/2;
        }
        return nums[mid]>target?mid:mid+1;
        
    }
};