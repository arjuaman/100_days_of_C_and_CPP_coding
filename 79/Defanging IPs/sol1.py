class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        splitted = address.split(".")
        answer=""
        for i in range(len(splitted)-1):
            answer += splitted[i]
            answer += "[.]"
        
        answer += splitted[len(splitted)-1]
        
        return answer
        