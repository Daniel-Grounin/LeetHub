class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int xy_area = 0, xz_area = 0, yz_area = 0;
        for(size_t i = 0; i < grid.size(); i++){
            int max_row = 0;  
            int max_col = 0; 
            for(size_t j = 0; j < grid.size(); j++){
                if (grid[i][j] > 0) {
                    xy_area += 1;
                }
                max_row = std::max(max_row, grid[i][j]);
                max_col = std::max(max_col, grid[j][i]);
            }
            xz_area += max_row; 
            yz_area += max_col;  
        }
        return xy_area + xz_area + yz_area;
    }
};