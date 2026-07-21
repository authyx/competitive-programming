class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        vector<vector<int>> res (grid);
        for (int i = 0; i < res.size(); i++)
        {
            int n = res[i].size();
            for (int j = 0; j < res[i].size(); j++)
            {
                int idx = (i * n + j - k) % (m * n);
                if (idx < 0)
                    idx += m * n;
                res[i][j]  = grid[idx / n][idx % n];
            }
        }
        return res;
    }
};