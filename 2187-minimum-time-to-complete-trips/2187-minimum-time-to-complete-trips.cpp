class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long l=0, r=100000000000000, ans=r;
        // vector<int>vec;
        while(l<r){
            long long mid = (l+r)/2;
            long long trip=0;
            for(auto it: time){
                trip+= mid/it;
            }
            if(trip>= totalTrips) ans = min(ans, mid), r=mid;
            else if(trip<totalTrips) l=mid+1;
        }
        
        return ans;
        
    }
};