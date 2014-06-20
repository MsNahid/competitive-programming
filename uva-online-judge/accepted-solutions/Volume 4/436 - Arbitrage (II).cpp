//============================================================================
// Author       : LAM PHAN VIET - lamphanviet@gmail.com
// Problem Name : 436 - Arbitrage (II)
// Time Limit   : .000s
// Description  : 
//============================================================================
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

#define fr(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define frr(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define rep(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define repr(i,n) for (int i = (n) - 1; i >= 0; i--)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define fill(ar, val) memset(ar, val, sizeof(ar))

#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define BIT(n) (1<<(n))
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a) | (b))
#define XOR(a,b) ((a) ^ (b))
#define sqr(x) ((x) * (x))

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 33

int n;
double d[maxN][maxN];
map<string, int> idx;

bool arbitrage() {
	fr(k, 1, n)
		fr(u, 1, n) fr(v, 1, n)
			d[u][v] = max(d[u][v], d[u][k] * d[k][v]);
	fr(u, 1, n)
		if (d[u][u] > 1.0)
				return true;
	return false;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	#endif
	double w;
	int u, v, m, caseNo = 0;
	char name[1000], name2[1000];
	while (scanf(" %d ", &n) && n) {
		idx.clear();
		fr(i, 1, n) {
			scanf(" %s ", name);
			idx[name] = i;
			fr(j, 1, n) d[i][j] = 0;
		}
		scanf(" %d ", &m);
		while (m--) {
			scanf(" %s %lf %s ", name, &w, name2);
			u = idx[name];
			v = idx[name2];
			d[u][v] = w;
		}
		printf("Case %d: %s\n", ++caseNo, arbitrage() ? "Yes" : "No");
	}
	return 0;
}

/* Copyright (C) 2012, LamPhanViet */
