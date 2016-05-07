#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
#include <stack>
#include <deque>
#include <cmath>
#include <memory.h>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <utility>
#include <cassert>
#include <complex>
#include <time.h>

#define V vector
#define INF 1000000000
typedef long long unsigned llu;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef V<int> vi;
typedef V<string> vs;
typedef V<llu> vllu;
typedef V<ll> vll;
typedef V<double> vd;
typedef V<pii> vpii;
typedef complex<double> base;
#define forup(i,a,b) for(int i=(a); i<(b); ++i)
#define fordn(i,a,b) for(int i=(a); i>(b); --i)
#define rep(i,a) for(int i=0; i<(a); ++i)
#define fov(i,a) rep(i,(a).size())
#define foreach(i,X) for(__typeof((X).begin()) i = (X).begin(); i != (X).end(); i++)
#define gi(x) scanf("%d",&x)
#define gd(x) scanf("%lf",&x)
#define gs(x) cin >> x
#define pi(x) printf("%d",x)
#define pin(x) printf("%d\n",x)
#define ps(s) cout << s;
#define psn(s) cout << s << "\n"
#define pn printf("\n")
#define spc printf(" ")
#define prec(x) cout<<fixed<<setprecision(x)
#define all(x) (x).begin(), (x).end()
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define fr freopen("input.in", "r", stdin)
#define fw freopen("output.out", "w", stdout)
#define FastIO ios_base::sync_with_stdio(0); \cin.tie(0);
#define SET(a,value) memset(a,value,sizeof(a))
const int inf = numeric_limits<int>::max();
const llu linf = numeric_limits<llu>::max();
double EPS = 1e-12;
double PI = 2 * acos(0);

/*********************bit manipulation******************/
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)

#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))

/******************************************/
#define SZ(V) (int)V.size()
const int MAX = 100007;
const int MAXE = 5000;
const int MAXV = 20*20;
const int BASE = 1000000007;
const int MOD = 1000000007;
/***************************************************
Common memset settings
memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
memset(arr, 0, sizeof arr); // to clear array of integers
ans = a ? b : c; // to simplify: if (a) ans = b; else ans = c;
index = (index + 1) % n; // index++; if (index >= n) index = 0;
index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
int ans = (int)((double)d + 0.5); // for rounding to nearest integer
ans = min(ans, new_computation); // min/max shortcut
ans <?= new_computation;
****************************************************/
