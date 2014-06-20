//============================================================================
// Author       : LAM PHAN VIET - lamphanviet@gmail.com
// Problem Name : 1083 - Histogram 
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
#define maxN 30003

int n, a[maxN], res;
int lf[maxN], rg[maxN];

int main() {
	#ifndef ONLINE_JUDGE
	freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	#endif
	int cases, caseNo = 0;
	for (scanf("%d", &cases); cases--; ) {
		scanf("%d", &n);
		fr(i, 1, n) scanf("%d", &a[i]);
		a[0] = a[n + 1] = res = 0;
		lf[0] = 0; rg[n + 1] = n + 1;
		for (int i = 1, j = n; i <= n; i++, j--) {
			lf[i] = i - 1;
			while (a[i] <= a[lf[i]]) lf[i] = lf[lf[i]];
			rg[j] = j + 1;
			while (a[j] <= a[rg[j]]) rg[j] = rg[rg[j]];
		}
		fr(i, 1, n) {
			res = max(res, a[i] * (rg[i] - lf[i] - 1));
		}
		printf("Case %d: %d\n", ++caseNo, res);
	}
	return 0;
}

// Copyright (C) 2012, LamPhanViet