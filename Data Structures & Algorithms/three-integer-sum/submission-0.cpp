class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Fix one element
        for (int i = 0; i < nums.size() - 2; i++) {

            // Skip duplicate fixed elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = nums.size() - 1;

            // Step 3: Use two pointers for remaining elements
            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {

                    result.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    // Skip duplicate left values
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    // Skip duplicate right values
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum < 0) {
                    left++;   // Need a larger sum
                }
                else {
                    right--;  // Need a smaller sum
                }
            }
        }

        return result;
    }
};