/*
	Leetcode 1768 - Merge Strings Alternately

	You are given two strings word1 and word2. 
	Merge the strings by adding letters in alternating order, starting with word1. 
	If a string is longer than the other, append the additional letters onto the end of the merged string.
	Return the merged string.
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