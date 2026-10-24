class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        maxx=0
        for i in accounts:
            c=0
            for j in i:
                c= c+j
            if(c>maxx):
                maxx=c
        return maxx