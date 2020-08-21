# https://practice.geeksforgeeks.org/problems/quadratic-equation-roots/1/?track=ppc-mathematics&batchId=221

#User function Template for python3
import math

##Complete this function
def quadraticRoots(a,b,c):
    #Your code here
    l = b * b - (4 * a * c)
    m = -b
    n = 2 * a
    if l > 0:
        l = math.sqrt(l)
        o = math.floor((m + l)/ n)
        p = math.floor((m - l) / n)
        if o < p:
            o = o + p
            p = o - p
            o = o - p
        print (o, p)
    elif l < 0:
        print('Imaginary')
    else:
        m = math.floor(m / n)
        print (m, m)
