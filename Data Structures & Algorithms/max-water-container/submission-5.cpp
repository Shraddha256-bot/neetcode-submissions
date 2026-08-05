class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();

        int left = 0;
        int right = n-1;

        int area = 1;

        int ans = 0;

        while(left < right){

        if(heights[left] == heights[right]){
            area = heights[left] * (right  - left);
            left++;
            right--;
            ans = max(ans, area);
        }

        while(heights[left] < heights[right]){
            area = heights[left ]* (right - left);
            left++;

            ans = max(ans, area);

        }

        while(heights[left] > heights[right]){
            area = heights[right] * (right - left);

            right--;

            ans = max(ans, area);
        }
        }

        return ans;

        
    }
};
