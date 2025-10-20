class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashTable;
        vector<int>res;
        for(int index=0; index<nums.size();index++)
        {
            auto same=hashTable.find(target-nums[index]);
            if (same!= hashTable.end()) {
                res.push_back(index);
                res.push_back(same->second);
                return res;
            }
            hashTable[nums[index]] = index;
        }
        return res;
    }
};