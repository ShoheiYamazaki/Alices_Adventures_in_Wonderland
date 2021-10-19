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


