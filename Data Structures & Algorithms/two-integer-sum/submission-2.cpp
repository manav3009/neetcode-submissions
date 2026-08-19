class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // int left = 0;
        // int right = n - 1;
        for(int i = 0;i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i,j};

                }
            }
        }
        return {-1,-1};
    }
};

