class Solution(object):
    def largestOddNumber(self, num):
        i=len(num)-1

        while i>=0:
            if int(num[i])%2!=0:
                j=0
                s=""
                while j<=i:
                    s+=num[j] 
                    j+=1 
                return s
            i-=1
        return ""