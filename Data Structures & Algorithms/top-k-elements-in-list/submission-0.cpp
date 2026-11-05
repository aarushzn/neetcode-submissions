class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        vector<pair<int, int>> freq;

        int count = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) {
                count++;
            }
            else {
                freq.push_back({nums[i - 1], count});
                count = 1;
            }
        }

        freq.push_back({nums.back(), count});

        sort(freq.begin(), freq.end(),
             [](pair<int, int> a, pair<int, int> b) {
                 return a.second > b.second;
             });

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }

        return ans;
    }
};