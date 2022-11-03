class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();
        int o = rows * cols;
        if(r * c != o){
            return mat;
        }
        else{
            vector<vector<int>>ans(r, vector<int>(c, 0));
            for(int i=0; i<o; i++){
                ans[i/c][i%c]=mat[i/cols][i%cols];
            }
            return ans;
        }
    }
};