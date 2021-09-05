class Solution {
public:
    void floodfiller(vector<vector<int>>& image , int sr , int sc , int prev_color , int newColor){
        int n = image.size();
        int m = image[0].size();
//         // if(sr > n || sr < 0 || sc > m || sc < 0){
//         //     return image;
//         // }
        
        if(image[sr][sc] == prev_color){
            image[sr][sc] = newColor;
        
        
            if(sr + 1 < n) floodfiller(image , sr + 1 , sc , prev_color , newColor);
            if(sr >= 1)floodfiller(image , sr - 1 , sc , prev_color , newColor);
            if(sc + 1 < m)floodfiller(image , sr , sc + 1 , prev_color , newColor);
            if(sc >= 1)floodfiller(image , sr , sc - 1 , prev_color , newColor);
        }
       // return image;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        int prev_color = image[sr][sc];
        if(prev_color != newColor) floodfiller(image , sr , sc , prev_color , newColor);
        return image;
    }
};
