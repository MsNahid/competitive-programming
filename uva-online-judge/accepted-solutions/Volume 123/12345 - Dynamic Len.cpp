//============================================================================
// Author       : LAM PHAN VIET
// Online Judge :
// Problem Name :
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
#define inpFile(f) freopen(f, "r", stdin)
#define outFile(f) freopen(f, "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define ff first
#define ss second
#define bit(n) (1<<(n))
#define Last(i) ( i & -i )
#define INF 500000000
#define maxN 50001
#define maxM 1000001
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int n, m, a[maxN], num[maxM];

int main() {
    #ifndef ONLINE_JUDGE
        inpFile("test.inp"); outFile("test.out");
    #endif
    char ch;
    int m, x, y;
    fill(num, 0);
    scanf("%d %d ", &n, &m);
    REP(i, n) scanf("%d ", &a[i]);
    while (m--) {
        scanf("%c %d %d ", &ch, &x, &y);
        if (ch == 'M') a[x] = y;
        if (ch == 'Q') {
            y--;
            int counter = 0;
            FOR (i, x, y)
                if (++num[a[i]] == 1) counter++;
            FOR (i, x, y)
                num[a[i]] = 0;
            printf("%d\n", counter);
        }
    }
    return 0;
}

// lamphanviet@gmail.com - 2011
