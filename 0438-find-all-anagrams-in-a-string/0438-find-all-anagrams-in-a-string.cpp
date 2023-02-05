class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        unordered_map<char, int>mp;
        for(auto it:p){
            mp[it]++;
        }
        
        int sz = s.size(), pz = p.size();
        
        unordered_map<char, int>window;
        
        for(int i=0; i<pz; i++){
            window[s[i]]++;
        }
        
        if(mp == window) ans.push_back(0);
        
        for(int i=pz; i<sz; i++){
            window[s[i-pz]]--;
            window[s[i]]++;
            if(window[s[i-pz]] ==0) window.erase(s[i-pz]);
            if(window== mp) ans.push_back(i-pz+1);
        }
        
//         for(int i=0; i<=(sz-pz); i++){
//             unordered_map<char, int>temp;
//             temp.insert(mp.begin(), mp.end());
            
//             for(int j=i; j<pz+i; j++){
//                 if(temp.find(s[j]) != temp.end()){
//                     temp[s[j]]--;
//                     if(temp[s[j]] ==0 ) temp.erase(s[j]);
//                 }
//                 else break;
//             }
//             if(temp.size()==0){
//               ans.push_back(i);
//                 // i+=2;
//             } 
//         }
        return ans;
    }
};