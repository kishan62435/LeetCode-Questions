class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c){
        int row=mat.size(), col = mat[0].size();
        
        if(r*c!= row*col) return mat;
        vector<vector<int>>ans;
        vector<int>single;
        
        for(auto it:mat){
            
            for(auto et: it){
                single.push_back(et);
            }
        }
        
        int it=0;
        for(int i=0; i<r; i++){
            
            vector<int>temp;
            for(int j=0; j<c; j++){
                temp.push_back(single[it++]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};