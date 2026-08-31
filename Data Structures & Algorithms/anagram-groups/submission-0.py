class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}
        for word in strs:
            sorted_key = "".join(sorted(word))

            if sorted_key not in groups:
                groups[sorted_key] = []
            
            groups[sorted_key].append(word)
        
        return list(groups.values())
        
 
