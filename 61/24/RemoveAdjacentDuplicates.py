from collections import deque

def reverse(string):
    string = string[::-1]
    return string

def dupRemoved(s):
    n = len(s)
    stack=deque()
    for i in range(0,n):
        if(len(stack)==0):
            stack.append(i)
            continue
        if(s[stack[-1]]==s[i]):
            stack.pop()
        else:
            stack.append(i)
    
    ans = ""
    while(len(stack)!=0):
        ans += s[stack.pop()]
    
    ans = reverse(ans);
    return ans

if __name__=='__main__':
    s = "foobar"
    print(dupRemoved(s))