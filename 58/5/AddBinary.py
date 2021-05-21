def stoi(s):
    n = len(s)
    ans = 0
    po = 1
    for i in range(n-1,-1,-1):
        x = ord(s[i])
        ans = ans + po*(x-ord('0'))
        po *= 10

    #print(type(ans))
    return ans

def btod(n):
    ans=0
    i=0
    while(n>0):
        temp = n%10
        ans = ans + temp*(2**i)
        i+=1
        n//=10
    return ans

def dtob(n):
    ans=0
    i=0
    while(n>0):
        temp = n%2
        #print(ans)
        ans = ans + temp*(10**i)
        i+=1
        n//=2
    return ans

if __name__=='__main__':
    s1 = input('');
    s2 = input('');
    n1 = stoi(s1)
    n2 = stoi(s2)
    n1 = btod(n1)
    n2 = btod(n2)
    ans = n1+n2
    ans = dtob(ans)
    print(ans)
