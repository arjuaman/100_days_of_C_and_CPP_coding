from collections import deque
def reverseString(s):
    n = len(s)
    stack = deque()
    for i in s:
        stack.append(i);

    ans = ""
    m = len(stack)
    for i in range(0,m):
        ans += stack.pop();
    
    return ans

if __name__=='__main__':
    s = input('Enter the string: ')
    print(reverseString(s))