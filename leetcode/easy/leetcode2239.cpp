/* 
	Leetcode 2239 - Find Closest Number to Zero 

	Given an integer array nums of size n, return the number with the value closest to 0 in nums. 
	If there are multiple answers, return the number with the largest value.

	Explanation: First off, to find the closest number, you first set the closest number to the first 
	value in the array/vector. Then, you iterate through the vector, and if a number's absolute value
	is less than the current closest value, it will set the closest value to the lower number. The 
	other conditional checks that if the closest value is the same as the current value AND if the 
	current value is greater than the closest value, it will set the closest value to the greater 
	value between the two. After the loop, the function returns the closest integer.
*/

#include <vector>
#include <stdlib.h>

class Solution {
public:
	int findClosestNumber(vector<int>& nums) {
		int closest = nums[0];
		for (int x : nums) {
			if (std::abs(x) < std::abs(closest) || (std::abs(x) == std::abs(closest) && x > closest)) {
				closest = x;
			}
		}
		return closest;
	}
};