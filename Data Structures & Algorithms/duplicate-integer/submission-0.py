class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hash_map = {}

        for num in nums:
            hash_map[num] = hash_map.get(num,0) + 1
        
        duplicates = next((num for num, count in hash_map.items() if count > 1), None)
        if (duplicates != None):
            return True
        else:
            return False