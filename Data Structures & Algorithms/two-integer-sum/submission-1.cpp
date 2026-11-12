class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Use a map and find if the difference
        // between the target and current element is in
        // the map
        std::unordered_map<int, int> nums_map;
        for (int i = 0; i < nums.size(); i++) {
            auto found = nums_map.find(target-nums[i]);
            if (found != nums_map.end()) {
                return {found->second, i};
            }
            nums_map.insert({nums[i], i});
        }
    }
};
