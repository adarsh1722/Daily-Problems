class Solution(object):
    def detectCapitalUse(self, word):
        
        #life is short use python
        
        n = len(word)
        c = 0
        for i in word:
            if i == i.upper():
                c += 1

        return ((c == 1) and word[0].isupper()) or (c == n) or (c == 0) 
        