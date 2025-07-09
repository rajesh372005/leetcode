#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;  // maps number -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numToIndex.find(complement) != numToIndex.end()) {
                // Found the pair
                return {numToIndex[complement], i};
            }
            // Store the current number and its index
            numToIndex[nums[i]] = i;
        }

        // If no solution found (problem states one always exists)
        return {};
    }
};
//chat gptvazhga//
