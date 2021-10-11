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


