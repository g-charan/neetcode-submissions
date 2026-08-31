class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hash_map = {}
        for num in nums:
            hash_map[num] = hash_map.get(num,0) + 1
        
        k_frequent_elements = sorted(hash_map,key = hash_map.get,reverse=True)[:k]
        return k_frequent_elements