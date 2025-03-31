class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0; 

        unordered_set<int> set(nums.begin(), nums.end()); 
        int maxLength = 0;

        for(int num : set) {
            if(set.find(num - 1) == set.end()) {
                int currentNum = num;
                int length = 1;

                while(set.find(currentNum + 1) != set.end()) {
                    currentNum++;
                    length++;
                }

                maxLength = max(maxLength, length);
            }
        }

        return maxLength;
    }
};
