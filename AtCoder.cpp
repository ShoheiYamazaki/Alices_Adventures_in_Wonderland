#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {

}


#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
    rep(i, 3) {
        cout << "Hello" << endl;
        cout << "AtCoder" << endl;
    }
}


#include <bits/stdc++.h>
using namespace std;
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    rep2(i, 2, 5) {
        cout << "Hello rep2: " << i << endl;
    }
}



A - Find Multiple
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    int NC = 0;
    cin >> A >> B >> C;
    int BC = B / C;
    if (BC == 0) {
        cout << -1 << endl;
    } else {
        for (int i = 1; i <= BC; i++) {
            NC = C * i;
            if ((A <= NC) && (NC <= B)){
                cout << NC << endl;
                break;
            }
            if (i == BC) {
                cout << -1 << endl;
            }
        }
    }
}


B - Base K
#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, A, B;
    string AA = "";
    string BB = "";
    cin >> K >> A >> B;
    AA = to_string(A);
    BB = to_string(B);
    long AAA = strtoul(AA, NULL, 10);
    long BBB = strtoul(BB, NULL, 10);
    cout << AAA * BBB << endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(string s,ll k){ // K 進法表記の S を、10 進法表記で表す関数
    ll ans=0;
    for(char x:s){
        ans *= k;
        ans += x - '0';
    }
    return ans;
}
signed main(){
    ll k;
    string a,b;
    cin>>k>>a>>b;
    ll A = f(a,k);
    ll B = f(b,k);
    cout<< A * B <<endl;
    return 0;
}

#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
  int K; cin>>K;
  string A,B; cin>>A>>B;
  int a=0,b=0;
  for(char c:A){
    a*=K;
    a+=c-'0';
  }
  for(char c:B){
    b*=K;
    b+=c-'0';
  }
  cout<<a*b<<endl;
}


A - Seismic magnitude scales
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B;
    C = A - B;
    if (C == 0) {
        cout << 1 << endl;
    } else {
        D = pow(32, C);
        cout << D << endl;
    }
}


B - typo
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    int i = 0;
    cin >> S >> T;
    int lengthS = S.length();
    if (S == T) {
        cout << "Yes" << endl;
    } else {
        for (i; i < lengthS; i++) {
            if (S[i] != T[i])
                break;
	    }
        char ctmp = S[i];
        ostringstream oss;
        oss << ctmp;
        string stmp = oss.str();
        char cctmp = S[i + 1];
        ostringstream ooss;
        ooss << cctmp;
        string sstmp = ooss.str();
        S.replace(i, 1, sstmp);
        S.replace(i + 1, 1, stmp);
        if (S == T) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}


C - Select Mul
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N;
    int lengthN = N.length();
    for (int i = 0; i < lengthN; i++) {
        A = N[i]
        B = 
    }
    cout <<  << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    string N; cin >> N;
    sort(N.begin(),N.end());
    int ans = 0;
    do{
        for(int i=1; i<N.size(); i++){
            string l = "", r = "";
            for(int j=0; j<i; j++) l += N[j];
            for(int j=i; j<N.size(); j++) r += N[j];
            if(l[0]=='0' || r[0]=='0') continue;
            ans = max(ans,stoi(l)*stoi(r));
        }
    }while(next_permutation(N.begin(),N.end()));
    cout << ans << endl;
}


A - Four Digits
#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    if (N.length() == 4) {
        cout << N << endl;
    } else if (N.length() == 3) {
        cout << "0" + N << endl; 
    } else if (N.length() == 2) {
        cout << "00" + N << endl; 
    } else {
        cout << "000" + N << endl; 
    }
}


B - Failing Grade
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int j = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] < P) {
            j += 1;
        }
    }
    cout << j;
}


C - Swiss-System Tournament
#include <bits/stdc++.h>
using namespace std;

int N, M;
string A[101];
int win[101];
//---------------------------------------------------------------------------------------------------
int battle(int round, int userA, int userB) {
    char a = A[userA][round];
    char b = A[userB][round];

    if (a == b) return -1;

    if (a == 'G' && b == 'C') return userA;
    if (a == 'C' && b == 'P') return userA;
    if (a == 'P' && b == 'G') return userA;

    return userB;
}
//---------------------------------------------------------------------------------------------------
void _main() {
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)
    cin >> N >> M;
    rep(i, N * 2) cin >> A[i];

    vector<int> order;
    rep(i, N * 2) order.push_back(i);

    rep(round, M) {
        rep(k, N) {
            int res = battle(round, order[k * 2], order[k * 2 + 1]);
            if (0 <= res) win[res]++;
        }
        sort(all(order), [&](int a, int b) {
            if (win[a] != win[b]) return win[a] > win[b];
            else return a < b;
        });
    }

    rep(i, N * 2) printf("%d\n", order[i] + 1);
}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N, M;
string A[100];
main() {
	cin>> N >> M;
	vector<pair<int,int> >id(2*N);
	for (int i=0; i<2*N; i++) {
		cin >> A[i];
		id[i] = make_pair(0,i);
	}
	for (int j=0; j<M; j++) {
		for (int i=0; i<N; i++) {
			int x = id[2*i].second, y = id[2*i+1].second;
			int ax = A[x][j] == 'G'?0:A[x][j] == 'C'?1:2;
			int bx = A[y][j] == 'G'?0:A[y][j] == 'C'?1:2;
			if (ax == bx);
			else if((bx-ax+3)%3==1)id[2*i].first--;
			else id[2*i+1].first--;
		}
		sort(id.begin(),id.end());
	}
	for(int i=0;i<2*N;i++)cout<<id[i].second+1<<endl;
}


C - Final Day
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    k -= 1;
    vector<int> p(n);
    for (int& x : p) {
        int a, b, c;
        cin >> a >> b >> c;
        x = a + b + c;
    }
    vector<int> q = p;
    sort(begin(q), end(q), greater<>());
    for (int x : p) {
        cout << (x + 300 >= q[k] ? "Yes" : "No") << '\n';
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    k -= 1;
    vector<int> p(n);
    for (int& x : p) {
        int a, b, c;
        cin >> a >> b >> c;
        x = a + b + c;
    }
    vector<int> q = p;
    nth_element(begin(q), begin(q) + k, end(q), greater<>());
    for (int x : p) {
        cout << (x + 300 >= q[k] ? "Yes" : "No") << '\n';
    }
}


AtCoder Beginner Contest 229

C - Cheese

#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;   // 十分大きな値に

int main() {
    // 入力を受け取る
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; ++i) cin >> a[i];
    for (int i = 0; i < N; ++i) cin >> b[i];
    
    // 線形探索
    int min_value = INF;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // 和が K 未満の場合はスキップ
            if (a[i] + b[j] < K) continue;

            // 最小値を更新
            if (a[i] + b[j] < min_value) {
                min_value = a[i] + b[j];
            }
        }
    }
    
    // 結果出力
    cout << min_value << endl;
}


AtCoder Beginner Contest 140

C - Maximal Value

#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i)
#define drep(i,cc,n) for(int i=cc;i>=n;--i)
#define sz(s) (int)(s.size())
#define mod 1000000007
using namespace std;
int main(){
  //入力を受け取る
  int n;
  cin >> n;
  int b[n-1];
  rep(i,0,n-2)cin >> b[i];
  long long ans = b[0];
  rep(i,1,n-2){
    //b_i, b_{i+1}のうち小さい方がA_iの最大値となる
    ans += min(b[i-1],b[i]);
  }
  ans += b[n-2];
  cout << ans << endl;
  return 0;
}


AtCoder Beginner Contest 135

C - City Savers

#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i) 
using namespace std;
int main(){
  //入力を受け取る
  int n;
  cin >> n;
  long a[n+1],b[n],ans=0.0;
  rep(i,0,n)cin >> a[i]; 
  rep(i,0,n-1)cin >> b[i];
  rep(i,0,n-1){
    //勇者iが倒せる数が残っていないときは次の勇者へ
    if(b[i]==0)continue;
    //勇者iが倒せる数が残っているモンスターの数より少ないときは倒せるだけ倒す
    //都市iのモンスターを倒しきれないとき
    if(b[i] <= a[i]){
      ans += b[i];
      continue;
    }
    //勇者iが倒せる数が残っているモンスターの数より少ないときは倒せるだけ倒す
    //都市iのモンスターは倒せるが都市i+1のモンスターは倒しきれないとき
    if(b[i] <= a[i] + a[i+1]){
      ans += b[i];
      b[i] -= a[i];
      a[i+1] -= b[i];
      continue;
    }
    //勇者iが都市i, i+1のモンスターをすべて倒しきれるときはすべて倒す
    ans += a[i]+a[i+1];
    //a[i]も0にすべきだが、この変数はこの後使わないので省略
    a[i+1]=0;
  }
  cout << ans << endl;
  return 0;
}


AtCoder Beginner Contest 141

D - Powerful Discount Tickets

#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i)
#define drep(i,cc,n) for(int i=cc;i>=n;--i)
#define sz(s) (int)(s.size())
#define vecprint(v) rep(i,0,v.size()-1)cout << v[i] << " ";cout << endl;
#define mod 1000000007
using namespace std;
int main(){
  int a,n,m;
  long long ans=0;
  priority_queue<int> q;
  //入力を受け取る
  cin >> n >> m;
  rep(i,0,n-1){
    cin >> a;
    q.push(a);
  }
  //チケットを一枚ずつ使う
  rep(i,0, m-1){
    //qから最大値を取り出し、値を半分にしてqに戻す
    a = q.top();
    q.pop();
    q.push(a/2);
  }
  //チケットを使い終わった後、qに残っている金額を合計する
  rep(i,0,n-1){
    a = q.top();
    q.pop();
    ans += a;
  }
  cout << ans << endl;
  return 0;
}


AtCoder Beginner Contest 139

D - ModSum

#include <bits/stdc++.h>
#define rep(i,cc,n) for(int i=cc;i<=n;++i)
#define drep(i,cc,n) for(int i=cc;i>=n;--i)
#define mod 1000000007
using namespace std;
class CompareFirst {
  public:
  bool operator()(pair<int,int> n1,pair<int,int> n2) {
    return n1.first>n2.first;
  }
};
int main(){
  long long n,k,ans;
  cin >> n;
  n--;
  ans = n*(n+1)/2;
  cout << ans << endl;
  return 0;
}


AtCoder Beginner Contest 139

C - Cheese

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,w;
  cin >> n >> w;
  vector<pair<long long,long long>> v(n);
  for(auto &nx : v){
    cin >> nx.first >> nx.second;
  }
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  long long res=0;
  for(auto &nx : v){
    res+=nx.first*min(w,nx.second);
    w-=min(w,nx.second);
  }
  cout << res << '\n';
  return 0;
}


AtCoder Beginner Contest 230

C - X drawing

#include <bits/stdc++.h>
using namespace std;
int main(void) {
	long long n, a, b;
	long long p, q, r, s;
	long long x, y;
	string str = "";
	vector<string>ans;
	cin >> n >> a >> b;
	cin >> p >> q >> r >> s;
	for (long long i = 0; i < (s - r + 1); i++)str += '.';
	for (long long i = 0; i < (q - p + 1); i++)ans.push_back(str);
	x = max(p - a, r - b);
	y = min(q - a, s - b);
	for (long long i = x; i <= y; i++)ans[a + i - p][b + i - r] = '#';
	x = max(p - a, b - s);
	y = min(q - a, b - r);
	for (long long i = x; i <= y; i++)ans[a + i - p][b - i - r] = '#';
	for (long long i = 0; i < (q - p + 1); i++)cout << ans[i] << endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(void) {
	long long n, a, b;
	long long p, q, r, s;
	cin >> n >> a >> b;
	cin >> p >> q >> r >> s;
	for (long long i = p; i <= q; i++) {
		for (long long j = r; j <= s; j++) {
			if ((i - j) == (a - b))cout << '#';
			else if ((i + j) == (a + b))cout << '#';
			else cout << ".";
		}
		cout << endl;
	}
	return 0;
}


AtCoder Beginner Contest 086

A - Product

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b;
    c = a * b;
    if (c % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}


AtCoder Beginner Contest 081

A - Placing Marbles

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '1') {
            ans += 1;
        }
    }
    cout << ans << endl;
}

B - Shift only

#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i;
    vector<int> A;
    int ans = 0;
    bool exist_odd = false;
    cin >> N;
    while (cin >> i) {
        A.push_back(i);
    }
    while (exist_odd == false) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                exist_odd = true;
            }
        }
        if (exist_odd == true) break;
        for (int i = 0; i < N; i++) {
                A[i] = A[i] / 2;
        }
        ans += 1;
    }
    cout << ans << endl;
}


AtCoder Beginner Contest 087

B - Coins

#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int res = 0;
  for (int a = 0; a <= A; ++a) {
    for (int b = 0; b <= B; ++b) {
      for (int c = 0; c <= C; ++c) {
        int total = 500*a + 100*b + 50*c;
        if (total == X) ++res;
      }
    }
  }
  cout << res << endl;
}


AtCoder Beginner Contest 083

B - Some Sums

#include <bits/stdc++.h>
using namespace std;

// 各桁の和を計算する関数
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int total = 0;
  for (int i = 1; i <= N; ++i) {
    int sum = findSumOfDigits(i); // i の各桁の和
    if (sum >= A && sum <= B) { //  i の各桁の和が A 以上 B 以下かどうか
      total += i;
    }
  }
  cout << total << endl;
}



AtCoder Beginner Contest 088

B - Card Game for Two

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int a[110];  // 最大 100 個ですが余裕をもたせます
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> a[i];

    sort(a, a + N, greater<int>());  // a[0:N] を大きい順にソート
    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) { // Alice のターン
            Alice += a[i];
        }
        else { // Bob のターン
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
}


AtCoder Beginner Contest 085

B - Kagami Mochi

// バケット法による解
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];

    int num[110] = {0};  // バケット
    for (int i = 0; i < N; ++i) {
        num[d[i]]++;  // d[i] が 1 個増える
    }

    int res = 0;  // 答えを格納
    for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
        if (num[i]) {  // 0 より大きかったら
            ++res;
        }
    }
    cout << res << endl;
}

// std::set を用いた解
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];

    set<int> values; // insert するときに重複を取り除いてくれます
    for (int i = 0; i < N; ++i) {
        values.insert(d[i]); // 挿入します
    }

    // set のサイズを出力します
    cout << values.size() << endl;
}

C - Otoshidama

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    int res10000 = -1, res5000 = -1, res1000 = -1;
    for (int a = 0; a <= N; ++a) {  // 10000円の枚数を 0 〜 N で調べる
        for (int b = 0; b + a <= N; ++b) {  // 5000円の枚数を 0 〜 N-a で調べる
            int c = N - a - b;  // 1000円の枚数は決まる
            int total = 10000*a + 5000*b + 1000*c;
            if (total == Y) {  // 答えが見つかったら
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }

    // 答えを出力 (見つかっていなくても -1 -1 -1 になるので OK です)
    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}


AtCoder Beginner Contest 232

A - QQ solver

#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    cout << int(S[0]) << endl;
    cout << int(S[2]) << endl;
    //cout << S[0] * S[2] << endl;
}

#include <iostream>
using namespace std;

int main() {
  char a, x, b;
  cin >> a >> x >> b;
  cout << (int)(a - '0') * (int)(b - '0') << '\n';
}


B - Caesar Cipher

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string s, t;
  cin >> s >> t;
  
  for(int k = 0; k <= 25; k++){
    string s2 = s;
    for(int i = 0; i < (int)s.size(); i++){
      s2[i] = ((s2[i]-'a')+k)%26 + 'a';
    }
    if(s2 == t){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  
  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string s, t;
  cin >> s >> t;
  
  int k = (t[0]-s[0]+26) % 26;
  string s2 = s;
  for(int i = 0; i < (int)s.size(); i++){
    s2[i] = ((s2[i]-'a')+k)%26 + 'a';
  }
  if(s2 == t) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}


AtCoder Beginner Contest 045

C - たくさんの数式

#include <stdio.h>
#include <string.h>
int max( int a, int b ) {
	return (a > b) ? a : b;
}
long long f( char s[], int x, int n ) {
	long long sum = 0;	
	if( x >= n ) {
		return 0;
	}
	long long num = 0;
	for( int i = x; i < n; i++ ) {
		num = num * 10 + (s[i]  - '0');
		sum += num * (1LL << max(0,n-i-2))+ f(s, i+1, n);
	}
	return sum;
}
int main( void ) {
	char s[20];
	scanf("%s", s);	
	printf("%lld\n", f(s, 0, strlen(s)));
	return 0;
}


AtCoder Beginner Contest 228

A - On and Off

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, x;
    cin >> s >> t >> x;
    if (s < t) {
        cout << (s <= x and x < t ? "Yes" : "No") << '\n';
    } else {
        cout << (x < t or s <= x ? "Yes" : "No") << '\n';
    }
}


AtCoder Beginner Contest 231

A - Water Pressure

#include <bits/stdc++.h>
using namespace std;
int main(){
    double a; cin >> a;
    cout << a / 100 << endl;
}


AtCoder Beginner Contest 085

A - Already 2018

#include <bits/stdc++.h>

using namespace std;

using int64 = long long;
const int64 LINF = 1LL << 61;
const int INF = 1 << 30;

int main()
{
  string S;
  cin >> S;
  S[3] = '8';
  cout << S << endl;
}


AtCoder Beginner Contest 212

C - Min Difference

#include <bits/stdc++.h>
using namespace std;

#define N 200010
#define INF 1010000000
#define rep(i, n) for(int i = 0; i < n; ++i)

int main(void) {
	int n, m;
	int a[N];
	int b[N];
	int ans = INF;
	cin >> n >> m;
	rep(i, n)cin >> a[i];
	rep(i, m)cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	int x = 0;
	int y = 0;
	while ((x < n) && (y < m)) {
		ans = min(ans, abs(a[x] - b[y]));
		if (a[x] > b[y])y++;
		else x++;
	}
	cout << ans << endl;

	return 0;
}


AtCoder Beginner Contest 213

B - Takahashis Secret

#include <bits/stdc++.h>
using namespace std;
int N, X;
int a[100001];
bool b[100001];
int main(void) {
  cin >> N >> X;
  for (int i = 1; i <= N; i++) cin >> a[i];
  int i = X;
  do {
    b[i] = true;
    i = a[i];
  } while (!b[i]);
  int ans = 0;
  for (int i = 1; i <= N; i++) if (b[i]) ans++;
  cout << ans << endl;
}


AtCoder Beginner Contest 226

A - Last Card

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, a; cin >> n >> k >> a;
    int ans = (a + k - 1) % n;
    if(ans == 0) ans = n;
    cout << ans << endl;
}


AtCoder Beginner Contest 204

B - Nuts

#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a[N];
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= N; i++) {
        if (a[i] >= 11) {
            ans += a[i] - 10;
        }
    }
    cout << ans << endl;
}


AtCoder Beginner Contest 203

B - AtCoder Condominium

#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            ans += stoi(to_string(i) + "0" + to_string(j));
        }
    }
    cout << ans << endl;
}


AtCoder Beginner Contest 202

A - Three Dice

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int aa, bb, cc;
    aa = 7 - a;
    bb = 7 - b;
    cc = 7 - c;
    int ans = aa + bb + cc;
    cout << ans << endl;
}