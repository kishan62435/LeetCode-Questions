class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int>mp;
        
        int mx=1;
        
        int i=0, j=0, n=fruits.size();
        
        
        while(j<n){
            
            while(j<n){
                mp[fruits[j++]]++;
                if(mp.size()>2) break;
                int sum=0; 
                if(mp.size()<=2){
                    for(auto it:mp) sum+=it.second;
                }
                mx = max(sum, mx);
            }
            
            while(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                i++;
            }
            
        }
        
        return mx;
    }
};