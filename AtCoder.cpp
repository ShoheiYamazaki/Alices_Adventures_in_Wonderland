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

