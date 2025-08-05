class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int newColor, int originalColor) {
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size())
            return;
        if (image[i][j] != originalColor)
            return;
        image[i][j] = newColor;
        dfs(image, i + 1, j, newColor, originalColor); 
        dfs(image, i - 1, j, newColor, originalColor); 
        dfs(image, i, j + 1, newColor, originalColor); 
        dfs(image, i, j - 1, newColor, originalColor); 
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor != color)
            dfs(image, sr, sc, color, originalColor);
        return image;
    }
};