from math import *

n = int ( input ())
a = list( map( int , input().split()))
a.sort( )
multiple = max( a[ 0 ] * a[ 1 ] , a[ -1 ] * a[ -2 ] , a[ -1 ] * a[ -2 ] * a[ -3 ] , a[ 0 ] * a[ 1 ] * a[ -1 ] )
print( multiple )
# chi cos 4TH: 2+ , 2- , 3+, (2- 1+)