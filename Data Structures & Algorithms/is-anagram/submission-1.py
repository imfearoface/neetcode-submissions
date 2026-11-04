from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq1, freq2 = Counter(s), Counter(t)
        if freq1 == freq2:
            return True
        return False