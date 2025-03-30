class Solution {
  public:
      int lengthOfLongestSubstring(string s) {
          int max = 0, left = 0;
          unordered_set<char> set;
          for (int right = 0; right < s.length(); right++) {
              if (set.find(s[right]) == set.end()) {
                  set.insert(s[right]);
                  max = std::max(max, right - left + 1);
              } else {
                  while (s[left] != s[right]) {
                      set.erase(s[left++]);
                  }
                  set.erase(s[left++]);
                  set.insert(s[right]);
              }
          }
          return max;
      }
  };