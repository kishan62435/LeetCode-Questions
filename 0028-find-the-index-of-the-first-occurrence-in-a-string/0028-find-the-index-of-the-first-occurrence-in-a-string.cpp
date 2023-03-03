class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int hsz= haystack.size(), nsz = needle.size();
        
        // if(hsz == nsz){
        //     if( haystack == needle) return 0;
        //     else return -1;
        // } 
        
        
        for(int i=0; i<=hsz-nsz; i++){
            cout<<haystack.substr(i, nsz)<<endl;
            if(haystack.substr(i, nsz) == needle) return i;
        }
        
        return -1;
    }
};