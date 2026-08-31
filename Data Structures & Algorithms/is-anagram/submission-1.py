class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hash_map = {}
        hash_map2 = {}
        for char in s:
            hash_map[char] = hash_map.get(char,0)+ 1
        
        for char in t:
            hash_map2[char] = hash_map2.get(char,0)+ 1
            
        if (hash_map == hash_map2):
            return True
        else:
            return False
        