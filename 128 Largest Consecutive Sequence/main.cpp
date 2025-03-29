class Solution {
  public:
      int longestConsecutive(vector<int>& nums) {
          std::unordered_set<int> set;
          int max = 0;
          for (auto x : nums) {
              set.insert(x);
          }
          for (auto x : set) {
              if(!set.count(x - 1)) {
                  int curr = x + 1;
                  while (set.count(curr))
                      curr++;
                  max = std::max(max, curr - x);
              }
          }
          return max;
      }
  };