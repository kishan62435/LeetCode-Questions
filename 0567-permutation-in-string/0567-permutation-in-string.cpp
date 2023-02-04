class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char, int>mp;
        
        for(auto it:s1){
            mp[it]++;
        }
        
        int sz1= s1.size(), sz2=s2.size();
        
        for(int i=0; i<(sz2-sz1+1); i++){
            unordered_map<char, int>temp;
            temp.insert(mp.begin(), mp.end());
            
            for(int j=i; j<sz1+i; j++){
                if(temp.find(s2[j])!=temp.end()){
                    temp[s2[j]]--;
                    if(temp[s2[j]]==0) temp.erase(s2[j]);
                }
                else break;
            }
            
            if(temp.size()==0) return true;
        }
        
        return false;
        
    }
};