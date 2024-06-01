#include<bits/stdc++.h>
using namespace std ; 
#define ll long long
int n , m, s ; 
vector<pair<int,int>> ke[ 1005 ];
int d[ 1005 ];

// khoi tao khoang cach tu s den tat ca cac dinh
void init(){
	for( int i = 1 ; i <= n ; i ++ )d[ i ] = 1e9 ; 
	d[ s ] = 0 ; 
}
// nhap du lieu
void nhap(){
	for( auto &x : ke )x.clear();
	cin >> n >> m >> s ; 
	while( m-- ){
		int u , v , w ; cin >> u >> v >> w ;
		ke[ u ].push_back({v ,w});
		ke[ v ].push_back({u, w});
	}
}

void Dijkstra( int s ){
	// su dung priority queue de tim ra dinh co khoang cach tu s toi ngan nhat nhanh
	priority_queue< pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > Q;
	// them dinh bat dau vao
	Q.push({0 , s});
	while( !Q.empty() ){
		// lay dinh co khoang cach ngan nhat ra cho lam dinh trung gian
		pair<int,int> tmp = Q.top();Q.pop();
		int u = tmp.second;
		int dis = tmp.first;
		// duyet tat ca cac dinh ke voi dinh trung gian 
		for( auto x : ke[ u ] ){
			int v = x.first ; 
			int w = x.second ;
			// neu di qua dinh trung gian khoang cach ngan hon thi thay doi
			if ( d[ v ] > d[ u ] + w ){
				d[ v ] = d[ u ] + w ;
				Q.push({d[ v ], v});
			}
		}
	}
	// in ra ket qua
	for( int i = 1 ; i <= n ; i ++ ){
		cout << d[ i ] << " "; 
	}
	cout << endl;
}

int main(){
	int t ; cin >> t; 
	while( t-- ){
		nhap();
		init();
		Dijkstra(s);
	}
	
	return 0 ; 
}