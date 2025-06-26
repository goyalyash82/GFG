class Solution:
    def multiplyStrings(self, s1, s2):
        # code here
        # return the product string
        for i in range(len(s1)):
            if s1[i] != '0':
                break
        l1 = s1[i:]
        if l1 == "": l1 = 0
        else: l1 = int(l1)
        #print(l1)
        
        for i in range(len(s2)):
            if s2[i] != '0':
                break
        l2 = s2[i:]
        if l2 == "": l2 = 0
        else: l2 = int(l2)
        #print(l2)
        
        return l1 * l2