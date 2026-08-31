class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 0;

        for(int num: numSet){
            if(!numSet.count(num-1)){
                int curr = num;
                int currentStreak = 1;

                while(numSet.count(curr + 1)){
                    curr++;
                    currentStreak++;
                }

                longest = max(longest,currentStreak);
            }
        }
        return longest;
    }
};
