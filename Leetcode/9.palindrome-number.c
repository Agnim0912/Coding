/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 *
 * https://leetcode.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (53.20%)
 * Likes:    8463
 * Dislikes: 2403
 * Total Accepted:    2.8M
 * Total Submissions: 5.3M
 * Testcase Example:  '121'
 *
 * Given an integer x, return true if x is a palindrome, and false
 * otherwise.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it
 * becomes 121-. Therefore it is not a palindrome.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a
 * palindrome.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * -2^31 <= x <= 2^31 - 1
 * 
 * 
 * 
 * Follow up: Could you solve it without converting the integer to a string?
 */

// @lc code=start
bool isPalindrome(int x){
    bool y=0;
    long int z=0;
    int original=x;
    if (x>=0){
        while(x!=0){
            z = (z*10)+x%10;
            x /= 10;
        }
        if(z==original){
            y=1;
        }
    }
    return y;
}
// @lc code=end

