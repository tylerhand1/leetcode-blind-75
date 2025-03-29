# 1 Two Sum
In my solution, I used an unordered_map to store a hashmap where the keys were values of the vector `nums` and the values were the indices of `nums`.

Iterating over the array, I check if the the value `target - nums[i]` was already a key in the map. If it is, return the value of that index and the current index, because these are the two indices I need. If the index is not found yet, add the pair to the map.