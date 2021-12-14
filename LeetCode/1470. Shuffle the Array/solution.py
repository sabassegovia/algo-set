"""
53 / 53 test cases passed.
Runtime: 24 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        return [nums[(i >> 1) + n] if i & 1 else nums[(i >> 1)] for i in range(2 * n)]
    