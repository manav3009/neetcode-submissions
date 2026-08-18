class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> mp;

        // Count numbers
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> v;

        // Store frequency and number
        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]] > 0) {
                v.push_back({mp[nums[i]], nums[i]});
                mp[nums[i]] = 0;
            }
        }

        // Sort by frequency
        sort(v.rbegin(), v.rend());

        vector<int> ans;

        // Take top k
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};