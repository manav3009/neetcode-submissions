class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int maxWater = 0;

        while (left < right) {

            int currWater = min(height[left], height[right]) 
                            * (right - left);

            maxWater = max(maxWater, currWater);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxWater;
    }
};