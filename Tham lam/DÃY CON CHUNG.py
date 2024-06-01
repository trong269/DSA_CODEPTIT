from math import *

for _ in range(int(input())):
    n , m , k = map( int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    giao1 , giao2 = [ ] , [ ]
    i , j = 0 , 0
    while i < n and j < m :
        if a[ i ] == b[ j ]:
            giao1.append(a[ i ] )
            i , j = i + 1 , j + 1
        elif a[ i ] > b[ j ]: j += 1
        else: i += 1
    i , j = 0 , 0
    while i < len( giao1 ) and j < k:
        if giao1[ i ] == c[ j ] :
            giao2.append( c[ j ] )
            i, j = i + 1, j + 1
        elif c[ j ] < giao1[ i ] : j += 1
        else : i += 1
    if len( giao2 ) != 0 :
        for x in giao2: print( x , end=' ')
    else: print('NO', end='')
    print()
