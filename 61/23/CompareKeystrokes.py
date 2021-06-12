from collections import deque
def check(s,t):
    n = len(s)
    m=len(t)
    stack = deque()
    for i in s:
        if(len(stack)==0 and i=='#'):
            continue
        elif(i!='#'):
            stack.append(i)
        elif(i=='#'):
            stack.pop()
    a1=""
    while(len(stack)!=0):
        a1 += stack.pop()
    
    for i in t:
        if(len(stack)==0 and i=='#'):
            continue
        elif(i!='#'):
            stack.append(i)
        elif(i=='#'):
            stack.pop()
    a2=""
    while(len(stack)!=0):
        a2 += stack.pop()

    return a1==a2


if __name__=='__main__':
    s = "como#pur#ter"
    t = "computer"
    if(check(s,t)):
        print("yes")
    else:
        print("no")