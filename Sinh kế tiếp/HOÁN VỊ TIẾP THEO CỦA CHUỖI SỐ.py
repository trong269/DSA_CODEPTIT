from math import *



for _ in range(int(input())):
    t , a = input().split()
    a = list(map( int , a ))
    print( t , end= " ")
    i = len( a  ) -2
    while a[ i ] >= a[ i + 1 ] and i >= 0 : i -= 1
    if i < 0 :
        print( "BIGGEST" )
    else:
        for j in range( len( a ) - 1 , i , -1 ):
            if a[ j ] > a[ i ] :
                tmp = a[j]
                a[j] = a[i]
                a[i] = tmp
                break
        l , r = i + 1 , len( a ) - 1
        while( l < r ):
            tmp = a[ l ]
            a[ l ] = a[ r ]
            a[ r ] = tmp
            l , r = l + 1 , r - 1
        for x in a : print( x , end="" )
        print()



# 3
# 1 123
# 2 279134399742
# 3 987