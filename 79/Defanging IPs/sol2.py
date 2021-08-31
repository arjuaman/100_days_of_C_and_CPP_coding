#Runtime: 14 ms, faster than 73.91% of Python online submissions for Defanging an IP Address.
#Memory Usage: 13.6 MB, less than 7.67% of Python online submissions for Defanging an IP Address.


class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        
        return address.replace(".","[.]");
        