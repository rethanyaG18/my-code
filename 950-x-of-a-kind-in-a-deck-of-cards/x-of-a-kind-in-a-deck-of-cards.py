from collections import Counter
from math import gcd
class Solution:
    def hasGroupsSizeX(self, deck):
        count = Counter(deck)
        g = 0
        for value in count.values():
            g = gcd(g, value)
        return g >= 2