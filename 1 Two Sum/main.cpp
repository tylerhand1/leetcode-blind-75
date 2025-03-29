class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> map;
          int n = nums.size();
          for (int i = 0; i < n; i++) {
              int searchValue = target - nums[i];
              if (map.find(searchValue) != map.end())
                  return {map[searchValue], i};
              
              map[nums[i]] = i;
          }
          return {};
      }
  };