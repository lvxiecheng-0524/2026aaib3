// week05-2.cpp 學習計劃 Built-in Functions 第2題
// LeetCode 709.  To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        // 字串s的長度.length()
        for (int i = 0; i < s.length(); i++) { // 逐字母處理
            if (isupper(s[i]))
                s[i] = s[i] - 'A' + 'a';
        } // s[0] = 'h';
        return s;
    }
};
