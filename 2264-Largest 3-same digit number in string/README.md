2264. Largest 3-Same-Digit Number in String
      Solved
      Easy
      Topics
      Companies
      Hint
      You are given a string num representing a large integer. An integer is good if it meets the following conditions:

It is a substring of num with length 3.
It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

A substring is a contiguous sequence of characters within a string.
There may be leading zeroes in num or a good integer.

Example 1:

Input: num = "6777133339"
Output: "777"
Explanation: There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".
Example 2:

Input: num = "2300019"
Output: "000"
Explanation: "000" is the only good integer.
Example 3:

Input: num = "42352338"
Output: ""
Explanation: No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.

Constraints:

3 <= num.length <= 1000
num only consists of digits.
Seen this question in a real interview before?
1/4
Yes
No
Accepted
81.1K
Submissions
120.2K
Acceptance Rate
67.5%
Topics
Companies
Hint 1
We can sequentially check if “999”, “888”, “777”, … , “000” exists in num in that order. The first to be found is the maximum good integer.
Hint 2
If we cannot find any of the above integers, we return an empty string “”.
