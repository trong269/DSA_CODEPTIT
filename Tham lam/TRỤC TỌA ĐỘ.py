from math import *

for _ in range(int(input())):
    n = int(input())
    a = []
    for i in range(n):
        x, y = map(int, input().split())
        a.append( [ x , y ] )
    a.sort( key=lambda x : x[ 1 ] )
    cnt, time_out = 0 , -1
    for i in range( n ):
        if a[ i ][ 0 ] >= time_out:
            cnt += 1
            time_out = a[ i ][ 1 ]
    print( cnt )
# 1
# 10
# 39 55
# 37 74
# 0 1
# 19 25
# 65 76
# 51 52
# 19 21
# 5 94
# 46 65
# 32 40
