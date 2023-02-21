class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sz = nums.size();

        if(nums.size()==1) return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[sz-1] != nums[sz-2]) return nums[sz-1];
        
        int l=0, r=sz-1;
        
        while(true){
            int mid = (l+r)/2;
            
            if(nums[mid]!= nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];
            
            if(mid%2!=0){
                if( mid>0 && nums[mid]!=nums[mid-1]) r=mid;
                else l=mid;
            }else{
                if(mid < sz-1 && nums[mid]!=nums[mid+1]) r=mid;
                else l=mid;
            }
        }
    }
};