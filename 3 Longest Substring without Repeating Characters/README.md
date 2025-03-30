# 3 Longest Substring without Repeating Characters
In this solution, I applied the sliding window technique to find the length of the longest subtring without repeating characters.

First, I defined a max and left variable to be 0. The left is for the left pointer of the window.

In a for loop, where `right` is the other pointer of the window, I check if the characer are `s[right]` is in the set.

If it is not, insert it and calculate the max. The max is calculated using `std::max()` with the parameters `max` and `right - left + 1`.

If it is in the set, we need to adjust the window. First, remove `s[left]` while incrementing `left` each time until it `s[left]` equals `s[right]`. Then, insert `s[right]`.