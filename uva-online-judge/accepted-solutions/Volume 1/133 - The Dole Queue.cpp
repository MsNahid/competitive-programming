//============================================================================
// Author       : LAM PHAN VIET - lamphanviet@gmail.com
// Problem Name : 133 - The Dole Queue
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
#define maxN 22

int n, m, k;
bool flag[maxN];

int main() {
	#ifndef ONLINE_JUDGE
	freopen("test.inp", "r", stdin);
	//freopen("test.out", "w", stdout);
	#endif
	while (scanf("%d %d %d", &n, &k, &m) && (n | m | k)) {
		bool comma = false;
		fill(flag, true);
		int ff = 1, ss = n, counter = 0;
		while (counter < n) {
			int c1 = 0, c2 = 0;
			while (true) {
				if (flag[ff]) c1++;
				if (c1 == k) break;
				ff = ff % n + 1;
			}
			while (true) {
				if (flag[ss]) c2++;
				if (c2 == m) break;
				ss--;
				if (ss == 0) ss = n;
			}
			if (comma) printf(",");
			else comma = true;
			flag[ff] = flag[ss] = false;
			if (ff == ss) {
				printf("%3d", ff);
				counter++;
			}
			else {
				printf("%3d%3d", ff, ss);
				counter += 2;
			}
		}
		puts("");
	}
	return 0;
}

/* Copyright (C) 2012, LamPhanViet */
