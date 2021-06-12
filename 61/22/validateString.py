from collections import deque

def validate(s,n):
    if(n==0):
        return True
    stack = deque()
    for i in s:
        if(len(stack)==0):
            stack.append(i)
            continue
        elif(i=='('):
            stack.append(i)
        elif(stack[-1]=='(' and i==')'):
            stack.pop()
        else:
            stack.append(i)

    return len(stack)==0

if __name__ == '__main__':
    s = ")("
    n = len(s)
    if(validate(s,n)):
        print("yes!")
    else:
        print("no!")