// week05-3b.cpp 學習計劃 Built-in Functions 第1題
// LeetCode 58. Length of Last Word 最後那個字，有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // week05 string字串stream串流(cin也是stream)
        // week04 C++ 的圓括號，是丟進去物件 初始化 的參數
        string ans;         // Week02 C++字串的宣告
        while (ss >> ans) { // 今天week05-1.cpp 有用到很像cin的iostream
            // 什麽都不做
        }
        return ans.length(); // week01 week02 字串的長度
    }
};
