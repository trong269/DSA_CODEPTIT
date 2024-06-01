from math import *

n , k = map( int, input().split())
a = list(map(int, input().split()))
x = [ 0 ] * 100
cnt = 0
def check():
    for i in range( 1 , k ):
        if a[ x[ i ] - 1 ] > a[ x[ i + 1 ] - 1 ]: return False
    return True

for i in range( 1 , k + 1 ):
    x[ i ] = i
if check(): cnt += 1
while True:
    i = k
    while x[ i ] == n - k + i and i > 0 : i -= 1
    if i > 0 :
        x[ i ] += 1
        for j in range( i + 1 , k + 1 ): x[ j ] = x[ i ] + j - i
        if check() : cnt += 1
    else: break
print( cnt )
