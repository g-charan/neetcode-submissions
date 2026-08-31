class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> seen;
        int n = numbers.size();
        vector<int> solution(2);

        for(int i=0; i < n; i++){
            int needed = target - numbers[i];
            
            if(seen.find(needed) != seen.end()){
                return {seen[needed],i+1};
            }

            seen[numbers[i]] = i + 1;
        }
        
        return {};
    }
};
