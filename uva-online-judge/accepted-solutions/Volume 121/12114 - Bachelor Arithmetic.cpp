//============================================================================
// Author       : LAM PHAN VIET - lamphanviet@gmail.com
// Problem Name : 12114 - Bachelor Arithmetic
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
#define OR(a,b) ((a)  (b))
#define XOR(a,b) ((a) ^ (b))
#define sqr(x) ((x) * (x))

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 100000


int main() {
	#ifndef ONLINE_JUDGE
		freopen("test.inp", "r", stdin);
		//freopen("test.out", "w", stdout);
	#endif
	int caseNo = 0, a, b;
	while (scanf("%d %d", &a, &b) && (a | b)) {
	    swap(a, b);
	    printf("Case %d: ", ++caseNo);
	    if (b == 1) {
	        puts(":-\\");
	        continue;
	    }
	    double x = a / (double)b;
	    double y = (a - 1) / (double)(b - 1);
	    y = min(y, 1.0); x = min(x, 1.0);
	    
	    if (x > y) puts(":-(");
	    if (x == y) puts(":-|");
	    else if (x < y) puts(":)");
	}
	return 0;
}
