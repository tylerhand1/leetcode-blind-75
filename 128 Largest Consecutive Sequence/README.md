# 128 Largest Consecutive Sequence
For this one, I used a set called `numsSet` where I populated the set with the values of `nums`. I initialized two variables `count` and `max`.

To calculate the largest consecutive sequence, I iterated over the set and if there is not an element one less than the current in the set, set `count` to 0. Update `max` to be equal to the old `count` value if it is greater.

Return the max of `max` and `count`.