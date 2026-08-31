class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = {}
        for i in range(0,len(nums)):
            remaining = target - nums[i] 
            if remaining in hash_map.keys():
                return [hash_map.get(remaining),i]
            hash_map[nums[i]] = i
           
                
