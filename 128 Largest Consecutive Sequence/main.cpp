class Solution {
  public:
      int longestConsecutive(vector<int>& nums) {
          std::set<int> numsSet;
          int numsSize = nums.size();
          int count = 0;
          int max = 0;
          for (int i = 0; i < numsSize; i++) {
              numsSet.insert(nums[i]);
          }
          for (int x : numsSet) {
              if(numsSet.find(x - 1) == numsSet.end()) {
                  if (max < count) max = count;
                  count = 0;
              }
              count++;
          }
          return std::max(max, count);
      }
  };