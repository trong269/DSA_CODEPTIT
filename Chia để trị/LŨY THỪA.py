from math import *

def amub( a , b ):
    if b == 0 : return 1
    x = amub( a , b // 2 )
    if b % 2 == 0 : return int(( x * x ) % ( 10**9 + 7 ))
    return int(( x * x * a ) % ( 10**9 + 7 ))

for _ in range(int(input())):
    a , b = map( int , input().split())
    print( amub ( a , b ) )
# 2
# 2 3
# 4 2