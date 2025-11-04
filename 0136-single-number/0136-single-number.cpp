class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map<int, int> scores;
        for(int num:nums)
        {
            scores[num]++;
        }
        for (const auto& pair : scores) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        return -1;
    }
};