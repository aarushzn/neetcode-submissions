class Solution{
    public: 
    int maxArea(vector<int>& heights){
         
        int i = 0; 
        int j = heights.size() - 1;
        int maxArea = 0;
        while(i < j){
            int width = j - i; 
            int height = min(heights[i], heights[j]);
            int currentarea = height * width; 
            maxArea = max(maxArea, currentarea);
            
            if(heights[i] < heights[j]){
                i++;
            }
            else if(heights[j] < heights[i]){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return maxArea;
    }
};