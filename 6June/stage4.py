def palindromeCheck(s):
    for i in range(0,2):
        if(s[i]!=s[len(s)-i-1]):
            return False
    return True
def palindromeTime(s,count = 0):
    if(palindromeCheck(s)==True): 
        return count
    else:
        minutes = int(s[3:])
        hour = int(s[:2])
        
        if(minutes == 59):
            if(hour == 23):
                hour = 0
            else: 
                hour += 1
            minutes = 00
        else:
            minutes += 1
        
        if(hour < 10 and minutes < 10):
            s = '0' + str(hour) + ':' + '0' +str(minutes)
        elif(minutes < 10):
            s = str(hour) + ':' + '0'+str(minutes)
        elif(hour<10):
            s = '0' + str(hour) + ':' + str(minutes)
        else:
            s = str(hour) + ':' + str(minutes)
        return palindromeTime(s,count+1)
        # return s
s = "23:59"
print(palindromeTime(s))