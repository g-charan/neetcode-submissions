class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hash_map = {}
        l,r = 0,0
        res = 0

        while r < len(s):
            if s[r] not in hash_map:
                hash_map[s[r]] = True
                maxl = r - l + 1
                res = max(res, maxl)
                r += 1
            else:
                del hash_map[s[l]]
                l += 1
        return res