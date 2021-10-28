#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
 
  if (op == "+") {
    cout << A + B << endl;
  } else if (op == "-") {
    cout << A - B << endl;
  } else if (op == "*") {
    cout << A * B << endl;
  } else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
      } else {
        cout << A / B << endl;
      }
  } else if (op == "?" || op == "=" || op == "!") {
    cout << "error" << endl;
  }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;
  bool b = false;
  bool c = true;

  // ここから先は変更しないこと

  if (a) {
    cout << "At";
  }
  else {
    cout << "Yo";
  }

  if (!a && b) {
    cout << "Bo";
  }
  else if (!b || c) {
    cout << "Co";
  }

  if (a && b && c) {
    cout << "foo!";
  }
  else if (true && false) {
    cout << "yeah!";
  }
  else if (!a || c) {
    cout << "der";
  }

  cout << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1
  if (p == 1) {
    int price, N;
    cin >> price >> N;
    cout << price * N << endl;
  }

  // パターン2
  if (p == 2) {
    string text;
    int price, N;
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  // 1.の出力
  x++;
  cout << x << endl;
  // 2.の出力
  x *= a + b;
  cout << x << endl;
  // 3.の出力
  x *= x;
  cout << x << endl; 
  // 4.の出力
  x--;
  cout << x << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  cout << "A:";
  int i = 0;
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;
  cout << "B:";
  int j = 0;
  while (j < B) {
    cout << "]";
    j++;
  }
  cout << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  for (int i = 0; i < N; i++) {
    string x;
    int y;
    cin >> x >> y;
    if (x == "+"){
      A += y; 
      cout << i + 1 << ":" << A << endl;
    } else if (x == "-") {
      A -= y;
      cout << i + 1 << ":" << A << endl;
    } else if (x == "*") {
      A *= y;
      cout << i + 1 << ":" << A << endl;
    } else if (x == "/" && y != 0) {
      A /= y;
      cout << i + 1 << ":" << A << endl;
    } else {
      cout << "error" << endl;
      break;
    }
  }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int count = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '1') {
      count++;
    }
  }
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '-') {
      count -= 2;
    }
  }
  cout << count << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  int sum = 0;
  for (int i = 0; i < N; i++) {
    sum += A.at(i);
  }
  int mean = sum / N;
  for (int i = 0; i < N; i++) {
    cout << abs(mean - A.at(i)) << endl;
  }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int X = max(A, max(B, C));
  int Y = min(A, min(B, C));
  int dif = X - Y;
  cout << dif << endl;
}


#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> scores) {
  int s = 0;
  for (int i = 0; i < scores.size(); i++) {
    s += scores.at(i);
  }
  return s;
}

void output(int sum_a, int sum_b, int sum_c) {
  cout << sum_a * sum_b * sum_c << endl;
}

vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}

int main() {
  int N;
  cin >> N;
  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);
  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);
  output(sum_A, sum_B, sum_C);
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  string equal = "false";
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
  for (int i = 0; i < 4; i++) {
    if (data.at(i) == data.at(i+1)) {
      cout << "YES" << endl;
      equal = "true";
      break;
    }
  }
  if (equal == "false") {
    cout << "NO" << endl;
  }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if ((A.at(i) + P.at(j)) == S) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> result(N, vector<char>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if () {
        result.at(i).at(j) = "o"
        cout << result.at(i).at(j);
        if (j == N - 1) {
          cout << endl;
        } else {
          cout << " ";
        }
      } else if () {
        result.at(i).at(j) = "x"
        cout << result.at(i).at(j);
        if (j == N - 1) {
          cout << endl;
        } else {
          cout << " ";
        }
      } else {
        result.at(i).at(j) = "-"
        cout << result.at(i).at(j);
        if (j == N - 1) {
          cout << endl;
        } else {
          cout << " ";
        }
      }
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> result(N, vector<char>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      result.at(A.at(i)).at(B.at(j)) = 
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }

  // N×Nのchar型の2次元配列のすべての要素を'-'で初期化
  vector<vector<char>> table(N, vector<char>(N, '-'));

  for (int i = 0; i < M; i++) {
    // 1〜N → 0〜N-1 に変換
    A.at(i)--; B.at(i)--;
    table.at(A.at(i)).at(B.at(i)) = 'o';  // AはBに勝った
    table.at(B.at(i)).at(A.at(i)) = 'x';  // BはAに負けた
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j == N - 1) {
        cout << endl;  // 行末なら改行
      }
      else {
        cout << " ";  // 行末でないなら空白を出力
      }
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
  vector<vector<char>> table(N, vector<char>(N, '-'));
  for (int i = 0; i < M; i++){
    A.at(i)--; B.at(i)--;
    table.at(A.at(i)).at(B.at(i)) = 'o';
    table.at(B.at(i)).at(A.at(i)) = 'x';
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << table.at(i).at(j);
      if (j == N - 1) {
        cout << endl;
      }
      else {
        cout << " ";
      }
    }
  }
}


#include <bits/stdc++.h>
using namespace std;

// 参照渡しを用いて、呼び出し側の変数の値を変更する
/* 呼び出し側に対応するように引数を書く */
void saiten(  vector<vector<int>> &A, int &correct_count, int &wrong_count) {
  // 呼び出し側のAの各マスを正しい値に修正する
  // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
  // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
  // ここにプログラムを追記
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (A.at(i).at(j) != (i + 1) * (j + 1)) {
        A.at(i).at(j) = (i + 1) * (j + 1);
        wrong_count += 1;
      }
      else {
        correct_count += 1;
      }
    }
  }
}

// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる

  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);

  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}


#include <bits/stdc++.h>
using namespace std;

// x番の組織が親組織に提出する枚数を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(vector<vector<int>> &children, int x) {
  // (ここに追記して再帰関数を実装する)
  // ベースケース
  if (children.at(x).size() == 0) {
    return 1;  // 子組織が無いような組織について、報告書の枚数は1
  }
  // 再帰ステップ
  int max_receive_num = 0;  // 受け取った報告書の最大値
  // x番の組織の子組織についてループ
  for (int c : children.at(x)) {
    max_receive_num += count_report_num(children, c);
  }
  max_receive_num += 1;
  return max_receive_num;
}

// これ以降の行は変更しなくてよい

int main() {
  int N;
  cin >> N;

  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  // 組織の関係から2次元配列を作る
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }

  // 各組織について、答えを出力
  for (int i = 0; i < N; i++) {
    cout << count_report_num(children, i) << endl;
  }
}


#include <bits/stdc++.h>
using namespace std;

int f0(int N) {
  return 1;
}

int f1(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    s++;
  }
  for (int i = 0; i < M; i++) {
    s++;
  }
  return s;
}

int f2(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
      int t = N;
      int cnt = 0;
      while (t > 0) {
        cnt++;
        t /= 2;
      }
      s += cnt;
  }
  return s;
}


int f3(int N) {
  int s = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s++;
    }
  }
  return s;
}

int f4(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      s += i + j;
    }
  }
  return s;
}

int f5(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      s += i + j;
    }
  }
  return s;
}

int main() {
  int N, M;
  cin >> N >> M;

  int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;

  // 計算量が最も大きいもの1つだけコメントアウトする
  a0 = f0(N);
  a1 = f1(N, M);
  a2 = f2(N);
  a3 = f3(N);
  //a4 = f4(N);
  a5 = f5(N, M);

  cout << "f0: " << a0 << endl;
  cout << "f1: " << a1 << endl;
  cout << "f2: " << a2 << endl;
  cout << "f3: " << a3 << endl;
  cout << "f4: " << a4 << endl;
  cout << "f5: " << a5 << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  pair<int, int> p;
  int a, b;
  for (int elem : p) {
    cin >> a >> b;
  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> p(N);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    p.at(i) = make_pair(b, a);
  }

  sort(p.begin(), p.end());

  for (int i = 0; i < N; i++) {
    int b, a;
    tie(b, a) = p.at(i);
    cout << a << " " << b << endl;
  }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.at(i) = a;
  }
  map<int, int> B;
  
  for (int i = 0; i < A.size(); i++) {
    int a = A.at(i);
    B[a]++;
  }

  int k, v;
  for (auto p : B) {
    auto k = p.first;
    auto v = p.second;
  }
  cout << k << " " << v << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  map<int, int> cnt;
  for (int x : A) {
    if (cnt.count(x)) {
      // 既に含まれているならインクリメント
      cnt.at(x)++;
    } else {
      // 含まれていないなら、1を追加
      cnt[x] = 1;
    }
  }

  int max_cnt = 0;  // 出現回数の最大値を保持
  int ans = -1;     // 出現回数が最大になる値を保持
  for (int x : A) {
    // 今見ているxの出現回数が、その時点の最大よりも大きければ更新
    if (max_cnt < cnt.at(x)) {
      max_cnt = cnt.at(x);
      ans = x;
    }
  }

  cout << ans << " " << max_cnt << endl;
}


#include <bits/stdc++.h>
using namespace std;

struct Clock {
   int hour;
   int minute;
   int second;

  void set (int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  string to_str () {
    string ret;
    if (!(0 <= hour && hour <= 23 && 0 <= minute && minute <= 59 && 0 <= second && second <= 59)) {
      return "error";
    }
    if (hour < 10) ret += "0";
    ret += to_string(hour);
    ret += ":";
    if (minute < 10) ret += "0";
    ret += to_string(minute);
    ret += ":";
    if (second < 10) ret += "0";
    ret += to_string(second);
    return ret;
  }

  void shift (int diff_second) {
    int diff_hour = diff_second / 3600;
    diff_second %= 3600;
    int diff_minute = diff_second / 60;
    diff_second %= 60;

    second += diff_second;
    if (second >= 60) {
      minute += 1;
      second -= 60;
    } else if (second < 0) {
      minute -= 1;
      second += 60;
    }

    minute += diff_minute;
    if (minute >= 60) {
      hour += 1;
      minute -= 60;
    } else if (minute < 0) {
      hour -= 1;
      minute += 60;
    }

    hour += diff_hour;
    if (hour >= 24) {
      hour -= 24;
    } else if (hour < 0) {
      hour += 24;
    }
  }
};

int main() {
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
  Clock clock;
  clock.set(hour, minute, second);
  cout << clock.to_str() << endl;
  clock.shift(diff_second);
  cout << clock.to_str() << endl;
}


#include <bits/stdc++.h>
using namespace std;

// 各操作を行う関数を実装する

// AとBに共通して含まれる要素からなる集合を返す
bitset<50> intersection(bitset<50> A, bitset<50> B) {
  auto S = A & B;
  return S;
}
// AとBのうち少なくとも一方に含まれる要素からなる集合を返す
bitset<50> union_set(bitset<50> A, bitset<50> B) {
  auto S = A | B;
  return S;
}
// AとBのうちどちらか一方にだけ含まれる要素からなる集合を返す
bitset<50> symmetric_diff(bitset<50> A, bitset<50> B) {
  auto S = A ^ B;
  return S;
}
// Aから値xを除く
bitset<50> subtract(bitset<50> A, int x) {
  A.reset(x);
  return A;
}
// Aに含まれる要素に1を加える(ただし、要素49が含まれる場合は0になるものとする)
bitset<50> increment(bitset<50> A) {
  bitset<50> ret = A << 1;  // 左シフトでまとめて+1する
  if (A.test(49)) {
    ret.set(0, 1);
  }
  return ret;
}
// Aに含まれる要素から1を引く(ただし、要素0が含まれる場合は49になるものとする)
bitset<50> decrement(bitset<50> A) {
    bitset<50> ret = A >> 1;  // 右シフトでまとめて-1する
  if (A.test(0)) {
    ret.set(49, 1);
  }
  return ret;
}

// Sに値xを加える
bitset<50> add(bitset<50> S, int x) {
  S.set(x, 1);  // xビット目を1にする
  return S;
}

// 集合Sの内容を昇順で出力する(スペース区切りで各要素の値を出力する)
void print_set(bitset<50> S) {
  vector<int> cont;
  for (int i = 0; i < 50; i++) {
    if (S.test(i)) {
      cont.push_back(i);
    }
  }
  for (int i = 0; i < cont.size(); i++) {
    if (i > 0) cout << " ";
    cout << cont.at(i);
  }
  cout << endl;
}

// これより下は書き換えない

int main() {
  bitset<50> A, B;
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    A = add(A, x);
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; i++) {
    int x;
    cin >> x;
    B = add(B, x);
  }

  // 操作
  string com;
  cin >> com;

  if (com == "intersection") {
    print_set(intersection(A, B));
  } else if (com == "union_set") {
    print_set(union_set(A, B));
  } else if (com == "symmetric_diff") {
    print_set(symmetric_diff(A, B));
  } else if (com == "subtract") {
    int x;
    cin >> x;
    print_set(subtract(A, x));
  } else if (com == "increment") {
    print_set(increment(A));
  } else if (com == "decrement") {
    print_set(decrement(A));
  }
}


// 問題文の形式でvec値を出力
void print_vec(vector<int> vec)

// 変数名を読み取りイコールを読み飛ばす
string read_name()

// int式の項を1つ読み取る。
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
int read_int(map<string, int> &var_int)

// int式全体を読み取って計算する
// var_int : intの変数を保持するmap
int calc_int(map<string, int> &var_int)

// vec値を読み取る
// 最初の"["は読み取ってある前提であることに注意
// var_int : intの変数を保持するmap
vector<int> read_vec_val(map<string, int> &var_int)

// vec式の項を1つ読み取る
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec)

// vec式全体を読み取って計算する
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec)


int main() {

  // 命令の行数を取得
  int N;
  cin >> N;

  map<string, int> var_int; // intの変数を管理するmap
  map<string, vector<int>> var_vec; // vectorの変数を管理するmap

  // 行数分の処理
  for (int i = 0; i < N; i++) {

    // 命令を受け取る
    string s;
    cin >> s;

    // int命令の処理
    if (s == "int") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_int[name] = calc_int(var_int);
    }

    // vec命令の処理
    if (s == "vec") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_vec[name] = calc_vec(var_int, var_vec);
    }

    // print_int命令の処理
    if (s == "print_int") {
      // 式を計算して出力
      cout << calc_int(var_int) << endl;
    }

    // print_vec命令の処理
    if (s == "print_vec") {
      // 式を計算して出力
      print_vec(calc_vec(var_int, var_vec));
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

// 変数名を読み取りイコールを読み飛ばす
string read_name() {
  string name, equal;
  cin >> name >> equal;
  return name;
}

// int式の項を1つ読み取る。
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
int read_int(map<string, int> &var_int) {
  string val;
  cin >> val;

  // 最初の文字が数字かどうかで数字か変数かを判定（3.06で紹介した条件演算子を使用。if文で書いても良い。）
  return isdigit(val.at(0))
    ? stoi(val) // 数値の場合
    : var_int.at(val); // 変数の場合

  // isdigit関数は3.06で、stoi関数は3.01で紹介している
  // これらを使わず自分で変換する処理を書いても良い
}

// int式全体を読み取って計算する
// var_int : intの変数を保持するmap
int calc_int(map<string, int> &var_int) {

  string symbol = ""; // 演算子を受け取る変数
  int result = 0; // 結果を保持する変数

  // 式の終わりである";"が出てくるまで読み取る
  while (symbol != ";") {
    // 項を1つ読み取る
    int val = read_int(var_int);

    // 記号が入力されてない場合（式の最初の項）は結果にそのまま代入
    if (symbol == "") {
      result = val;
    }
    // 足し算の場合
    if (symbol == "+") {
      result += val;
    }
    // 引き算の場合
    if (symbol == "-") {
      result -= val;
    }

    // symbolには"+", "-", ";"のいずれかが入力される
    cin >> symbol;
  }

  return result;
}

// vec値を読み取る
// 最初の"["は読み取ってある前提であることに注意
// var_int : intの変数を保持するmap
vector<int> read_vec_val(map<string, int> &var_int) {

  vector<int> result; // 結果を保持する変数
  string symbol = ""; // vec値中の記号を受け取る変数

  // vec値の終わりである"]"が出てくるまで読み取る
  while (symbol != "]") {
    // 数値を1つ読み取ってvecに追加
    int val = read_int(var_int);
    result.push_back(val);

    // symbolには","か"]"が入力される
    cin >> symbol;
  }

  return result;
}

// vec式の項を1つ読み取る
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {

  string val;
  cin >> val;

  // "["かどうかでvec値か変数かを判定（3.06で紹介した条件演算子を使用。if文で書いても良い。）
  return val == "["
    ? read_vec_val(var_int) // vec値の場合
    : var_vec.at(val); // 変数の場合
}

// vec式全体を読み取って計算する
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {

  string symbol; // 演算子を受け取る変数
  vector<int> result; // 結果を保持する変数

  // 式の終わりである";"が出てくるまで読み取る
  while (symbol != ";") {

    // 項を1つ読み取る
    vector<int> vec = read_vec(var_int, var_vec);

    // 記号が入力されてない場合（式の最初の項）は結果にそのまま代入
    if (symbol == "") {
      result = vec;
    }
    // 足し算の場合
    if (symbol == "+") {
      for (int i = 0; i < result.size(); i++) {
        result.at(i) += vec.at(i);
      }
    }
    // 引き算の場合
    if (symbol == "-") {
      for (int i = 0; i < result.size(); i++) {
        result.at(i) -= vec.at(i);
      }
    }

    // symbolには"+", "-", ";"のいずれかが入力される
    cin >> symbol;
  }

  return result;
}

int main() {

  // 命令の行数を取得
  int N;
  cin >> N;

  map<string, int> var_int; // intの変数を管理するmap
  map<string, vector<int>> var_vec; // vectorの変数を管理するmap

  // 行数分の処理
  for (int i = 0; i < N; i++) {

    // 命令を受け取る
    string s;
    cin >> s;

    // int命令の処理
    if (s == "int") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_int[name] = calc_int(var_int);
    }

    // vec命令の処理
    if (s == "vec") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_vec[name] = calc_vec(var_int, var_vec);
    }

    // print_int命令の処理
    if (s == "print_int") {
      // 式を計算して出力
      cout << calc_int(var_int) << endl;
    }

    // print_vec命令の処理
    if (s == "print_vec") {
      // 式を計算して出力
      print_vec(calc_vec(var_int, var_vec));
    }
  }
}