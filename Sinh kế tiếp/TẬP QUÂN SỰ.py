from math import *

def check( a , n , k ):
    for i in range( k ):
        if a[ i ] != n - k + i + 1 : return False
    return True


for _ in range(int(input())):
    n , k = map(int,input().split())
    x = list(map(int,input().split()))
    if check( x , n , k ) : print(k)
    else :
        a = x[ :: ]
        i = k - 1
        while x[ i ] == n - k + i + 1 and i >= 0 : i -= 1
        x[ i ] += 1
        for j in range( i + 1 , k ): x[ j ] = x[ i ] + j - i
        cnt = 0
        for i in a :
            if not( i in x ) : cnt += 1
        print( cnt )
# 3
# 5 3
# 1 3 5
# 5 3
# 1 4 5
# 6 4
# 3 4 5 6