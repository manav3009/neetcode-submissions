class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> mp;

        // Count
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> v;

        // Store frequency and number
        for (auto x : mp) {
            v.push_back({x.second, x.first});
        }

        // Sort from high to low
        sort(v.rbegin(), v.rend());

        vector<int> ans;

        // Take top k
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};