/*
	Leetcode 1768 - Merge Strings Alternately

	You are given two strings word1 and word2. 
	Merge the strings by adding letters in alternating order, starting with word1. 
	If a string is longer than the other, append the additional letters onto the end of the merged string.
	Return the merged string.

	Explanation: First off, we create the merged string and find the lengths of word1 and word2. Then, we create
	iterators, i and j, and set them equal to zero. Then we have 3 while loops. The first loop 
*/

#include <string>

class Solution {
public:
	string mergeAlternately(string word1, string word2) {
		std::string merged;
		int length1 = word1.length();
		int length2 = word2.length();
		int i = 0;
		int j = 0;
		while (i < length1 && j < length2) {
			merged += word1[i++];
			merged += word2[j++];
		}
		while (i < length1) {
			merged += word1[i++];
		}
		while (j < length2) {
			merged += word2[j++];
		}
		return merged;
	}
};