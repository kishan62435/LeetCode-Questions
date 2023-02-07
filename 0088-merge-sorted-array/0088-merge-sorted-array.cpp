class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int bigar = m+n-1;
        
        int n1=m-1, n2=n-1;
        
        while(n1>=0 && n2>=0){
            if(nums1[n1]>= nums2[n2]) nums1[bigar--] = nums1[n1--];
            else nums1[bigar--] = nums2[n2--];
        }
        
        while(n1>=0){
            nums1[bigar--] = nums1[n1--];
        }
        while(n2>=0){
            nums1[bigar--] = nums2[n2--];
        }
        
        // return nums1;
        
    }
};