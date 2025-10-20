class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0)
            return 0;

        int maxLength = 0;
        int start = 0;
        vector<int> used(256, -1); // מערך כדי לשמור על המיקום של התו האחרון

        for (int i = 0; i < s.length(); i++) {
            if (used[s[i]] >= start) {
                start = used[s[i]] + 1; // עדכון התחלה אם התו נמצא
            }
            used[s[i]] = i; // עדכון המיקום של התו
            maxLength = max(maxLength, i - start + 1); // עדכון אורך התת-שרשור
        }
        return maxLength;
    }
};