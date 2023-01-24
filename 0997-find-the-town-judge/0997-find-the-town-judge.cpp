class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(trust.size()==0){
            if(n>1) return -1;
            else return 1;
        }
        if(n==1){
            int sz = trust[0].size();
            if(sz==0) return n;
            else return trust[0][1];
        }
        unordered_map<int, int>mp;
        
        unordered_map<int, int>mp2;
        
        for(auto it:trust){
            mp2[it[0]]++;
        }
        
        for(auto it:trust){
            mp[it[1]]++;
        }
        
        int key, value=0;
        bool flag=0;
        for(auto it:mp){
            if(it.second == value){
                flag=1;
            }
            if(it.second >value){
                value = it.second;
                key= it.first;
                flag=0;
            }
        }
        
        int tsz = mp2.size();
        if(value!=n-1) return -1;
        
        if(flag==1 || (mp2.find(key)!=mp.end())) return -1;
        else return key;
    }
};