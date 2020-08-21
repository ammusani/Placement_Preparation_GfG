# https://practice.geeksforgeeks.org/problems/digits-in-factorial/1/?track=ppc-mathematics&batchId=221

def digitsInFactorial(N):
    #Your code here
    if N < 0:
        return 0
    if N < 2:
        return 1
    digit = 0
    for i in range(2, N + 1):
        digit = digit + math.log10(i)
        
    return math.floor(digit) + 1
