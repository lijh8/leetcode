#include <vector>

vector<int> twoSum(vector<int> &nums, int target) {
  if (size(nums) == 0) {
    return {};
  }
  for (auto i = 0; i != size(nums) - 1; i++) {
    for (auto j = i + 1; j != size(nums); j++) {
      if (nums[i] + nums[j] == target) {
        return {i, j};
      }
    }
  }
  return {};
}
