//============================================================================
// Author       : LAM PHAN VIET - lamphanviet@gmail.com
// Problem Name : 11956 - Brainfuck
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
#define FOR(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define REP(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define REPD(i,n) for (int i = (n) - 1; i >= 0; i--)
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
#define maxN 111

int value[maxN], n;
char s[100111];

string toHex(int k) {
    string res = "";
    rep(_, 2) {
        char d = k % 16;
        if (d < 10) d += 48;
        else d = d + 'A' - 10;
        res += d;
        k /= 16;
    }
    reverse(all(res));
    return res;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	#endif
	int cases, caseNo = 0;
	for (scanf(" %d ", &cases); cases--; ) {
        fill(value, 0);
        int pos = 0;
        gets(s);
        n = strlen(s);
        rep(i, n) {
            if (s[i] == '>') pos = (pos + 1) % 100;
            else if (s[i] == '<') {
                pos--;
                if (pos == -1) pos = 99;
            }
            else if (s[i] == '+')  {
                value[pos] = (value[pos] + 1) % 256;
                //printf("%d: %d\n", pos, value[pos]);
            }
            else if (s[i] == '-') {
                value[pos]--;
                if (value[pos] == -1) value[pos] = 255;
                //printf("%d: %d\n", pos, value[pos]);
            }
        }
        printf("Case %d:", ++caseNo);
        rep(i, 100)
            cout << " " << toHex(value[i]);
        puts("");
    }
	return 0;
}

// Copyright (C) 2012, LamPhanViet
