from math import *

f = [ 0 ] * 105

def init():
    f[ 0 ] , f[ 1 ] = 1 , 1
    for i in range( 2,101 ):
        f[ i ] = 0
        for j in range( 0 , i ):
            f[ i ] += f[ j ] * f[ i - j - 1 ]
init()
for _ in range(int(input())):
    n = int( input())
    print( f[ n ] )
