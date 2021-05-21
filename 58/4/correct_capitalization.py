def checkCap(s,n):
    if(n<=1):
        return True
    for i in range(1,n):
        if(s[i].isupper() and not s[i-1].isupper()):
            return False
    return True

if __name__=='__main__':
    s = input("Enter the string: ")
    n = len(s)
    if(checkCap(s,n)):
        print("Yes")
    else:
        print("No")