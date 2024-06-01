from math import *

for _ in range(int(input())):
    n = int( input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    c = [ [ a[ i ] , b[ i ] ] for i in range( n ) ]
    c.sort( key = lambda x : x[ 1 ] )
    time_out = -1
    cnt = 0
    for i in range( len( c ) ):
        if c[ i ][ 0 ] >= time_out:
            cnt += 1
            time_out = c[ i ][ 1 ]
    print( cnt )
# 1
# 6
# 1  3  0  5  8  5
# 2  4  6  7  9  9