class Solution {
  public:
      string longestPalindrome(string s) {
          if (s.length() == 1)
              return s;
  
          string max_palindrome;
  
          for (int i = 0; i < s.length(); i++) {
              int left = i, right = i;
              string palindrome = s.substr(0, 1);
  
              while (left > 0 && s[left - 1] == s[i])
                  left--;
  
              while(right < s.length() && s[right + 1] == s[i])
                  right++;
  
              palindrome = s.substr(left, right - left + 1);
  
              while (left > 0 && right <= s.length() && s[--left] == s[++right]) {
                  palindrome = s.substr(left, right - left + 1);
              }
  
              max_palindrome = palindrome.length() > max_palindrome.length() ? palindrome : max_palindrome;
          }
          
          return max_palindrome;
      }
  };