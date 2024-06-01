from math import *

n , k = map(int, input().split())
x = [ 0 ] * 100
res = [ ]

def check( ):
    global k
    cnt = 0
    maxx = -1e9
    for i in range( 1 , n + 1 ):
        if x[ i ] == 0 : cnt += 1
        else: cnt = 0
        maxx = max( maxx , cnt )
    return k == maxx

def display():
    s = ''
    for i in range( 1 , n + 1 ):
        if x[ i ] == 1 : s += 'B'
        else: s += 'A'
    res.append( s )
def back( i ):
    for j in range( 2 ):
        x[ i ] = j
        if i == n:
            if check():
                display()
        else: back( i + 1 )

back( 1 )
print(len( res ))
for x in res :
    print( x )