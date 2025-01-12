/* 
	Leetcode 2239 - Find Closest Number to Zero 

	Given an integer array nums of size n, return the number with the value closest to 0 in nums. 
	If there are multiple answers, return the number with the largest value.
*/

#include <vector>
#include <stdlib.h>

class Solution {
public:
	int findClosestNumber(vector<int>& nums) {
		int closest = nums[0];

		for (int x : nums) {
			if (std::abs(x) < std::abs(closest)) {
				closest = x;
			}
		}
	}
};