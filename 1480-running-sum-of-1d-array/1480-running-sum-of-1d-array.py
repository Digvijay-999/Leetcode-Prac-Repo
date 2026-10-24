class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result= []
        s=0
        for n in range(len(nums)):
            s+=nums[n]
            result.append(s)
        return result
        