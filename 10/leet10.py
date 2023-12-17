class Solution(object):
    def largestGoodInteger(self, num):
        t = ""
        for i in range(len(num)-2):
            if num[i] == num[num.index(num[i] )+1] and num[i]  == num[num.index(num[i] )+2]:
                if num[i]  > t:
                    t = num[i] 
        return(t+t+t)
                    
                

oggetto = Solution()
print(oggetto.largestGoodInteger("5566342342425556665"))