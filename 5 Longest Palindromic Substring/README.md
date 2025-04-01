# 5 Longest Palindromic Substring
For this solution, I first checked if the length of a string is 1. If it is, return the string as that is the max possible palindrome lenght.

Then, I iterated over the string in a for loop, where I set two variables: left and right. To account for even length palindromes, it first iterates over each where left decreases and right increases while the neighbor characters are equal.

Next, I set a local palindrome variable equal to the substring from `left` to `right - left + 1`.

If it can still iterate over `left` and `right` and the characters at those indices are equal, set a palindrome equal to that new substring palindrome.

Set the max palindrome equal to the local palindrome if its length is greater.

The complexity of this algorithm is O(n<sup>2</sup>) as it iterates over each character and from there iterates over each character both ways, i.e. O(n * n) or O(n<sup>2</sup>).