class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c){
        int row=mat.size(), col = mat[0].size();
        
        if(r*c!= row*col) return mat;
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                temp.push_back(mat[i][j]);
                if(temp.size() == c){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        
        return ans;
    }
};