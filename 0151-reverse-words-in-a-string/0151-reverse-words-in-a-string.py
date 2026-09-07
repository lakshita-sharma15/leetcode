class Solution(object):
    def reverseWords(self, s):
        list1 = s.split()
        list1.reverse()
        str1 = " ".join(list1)
        return str1

        