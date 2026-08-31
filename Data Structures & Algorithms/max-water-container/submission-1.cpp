class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = 0;
        int left = 0;
        int right = heights.size() - 1;

        while(left < right){
            int h = min(heights[left], heights[right]);
            int width = right - left;

            max_area = max(max_area, width*h);

            if(heights[left] < heights[right]){
                left++;
            } else {
                right--;
            }
        }
        return max_area;
    }
};
