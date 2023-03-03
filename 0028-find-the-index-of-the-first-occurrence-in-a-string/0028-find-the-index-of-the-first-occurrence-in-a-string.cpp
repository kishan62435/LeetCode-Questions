class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int ans;
        
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i]== needle[0]){
                ans=i;
                bool flag=0;
                for(int j=1; j<needle.size(); j++){
                    if(haystack[i+j]!=needle[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0) return ans;
            }
        }
        return -1;
    }
};