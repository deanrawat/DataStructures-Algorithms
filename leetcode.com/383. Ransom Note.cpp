// First go to leetcode.com -> problems -> search 821
/*
Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i = 0; i < ransomNote.size(); i++){
            m1[ransomNote[i]]++;
        }
        for(int i = 0; i < magazine.size(); i++){
            m2[magazine[i]]++;
        }
        for(auto x : m1){
            if(m2.find(x.first) == m2.end() || m2[x.first] < x.second){
                return false;
            }
        }
        return true;
    }
};