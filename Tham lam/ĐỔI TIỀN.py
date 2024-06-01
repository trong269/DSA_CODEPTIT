from math import *

a = [ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000 ]
for _ in range(int(input())):
    n = int(input())
    cnt = 0
    i = 9
    while n :
        cnt += n // a[ i ]
        n = n % a[ i ]
        i -= 1
    print( cnt )
