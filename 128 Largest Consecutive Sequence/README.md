# 128 Largest Consecutive Sequence
In my initial solution, I used an ordered set which requires more memory and storage, so it was not an optimal solution. The old solution was this:

```cpp
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
```

For this one, I used a set called `numsSet` where I populated the set with the values of `nums`. I initialized two variables `count` and `max`.

To calculate the largest consecutive sequence, I iterated over the set and if there is not an element one less than the current in the set, set `count` to 0. Update `max` to be equal to the old `count` value if it is greater.

Return the max of `max` and `count`.

## New Solution
In the new solution, I used an unordered set called `set` and set a variable `max` to 0. Like before, I populate the set with the values in the `nums` vector.

After, I iterated over the set and if the value one less does not exist, set the starting value to check as one more than the current. This is to see if the number is the start of the sequence. Loop through the sequence of increasingly greater values until it reaches a number not in the set. Set `max` to the max of `max` and `curr-x` or the largest number found minus the starting index.