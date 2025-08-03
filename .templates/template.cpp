/*
 * <bits/stdc++.h>
 *   - 競技プログラミングでよく使う標準C++ライブラリを一括でインクルードできる非標準ヘッダ
 *   - vector, string, map, set, algorithm, queue, stack, iostream などほぼ全てのSTLが使える
 *
 * <atcoder/all>
 *   - AtCoder公式のライブラリ（ACL）を全てインクルード
 *   - UnionFind（dsu）, modint（任意mod整数）, segtree（セグメント木）, fenwick_tree（BIT）など
 *   - AtCoderの多くの問題で高速に使える便利なデータ構造や数値型が揃っている
 *
 * <iomanip>
 *   - 出力の整形（小数点以下の桁数指定、右寄せ・左寄せ、fill文字指定など）に使う
 *   - 例: cout << fixed << setprecision(10) << x;
 *
 * <cmath>
 *   - 数学関数（sqrt, pow, abs, sin, cos, log, exp など）や定数（M_PIなど）を使うため
 *   - 浮動小数点の誤差比較や三角関数、累乗計算などで利用
 *
 * <ranges>
 *   - C++20で導入された範囲ベースの操作を提供
 *   - views::filter, views::transform, views::reverse などで配列やコンテナを直感的に操作できる
 *   - 例: auto odds = v | views::filter([](int x){ return x%2; });
 */
#include <bits/stdc++.h>
#include <atcoder/all>
#include <iomanip>
#include <cmath>
#include <ranges>
using namespace std;
using namespace atcoder;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define rep(i, x, limit) for (int i = (int)x; i < (int)limit; i++)
#define REP(i, x, limit) for (int i = (int)x; i <= (int)limit; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
#define spa " "
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
#define eps (1e-10)
#define Equals(a,b) (fabs((a) - (b)) < eps )
#define debug(x) cerr << #x << " = " << x << el

const double pi = 3.141592653589793238;
const int inf = 1073741823;
const ll infl = 1LL << 60;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";

template<typename T1, typename T2>
std::ostream &operator<< (std::ostream &os, std::pair<T1,T2> p){
    os << "{" << p.first << "," << p.second << "}";
    return os;
}

template<typename T1, typename T2> inline bool chmax(T1 &a, T2 b) {
    bool compare = a < b;
    if(compare) a = b;
    return compare;
}
template<typename T1, typename T2> inline bool chmin(T1 &a, T2 b) {
    bool compare = a > b;
    if(compare) a = b;
    return compare;
}

//4近傍、(一般的に)上右下左
// const int dy[4] = {-1,0,1,0};
// const int dx[4] = {0,1,0,-1};

//8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
// const int dy[8] = {-1,-1,-1,0,1,1,1,0};
// const int dx[8] = {-1,0,1,1,1,0,-1,-1};

//outofは範囲外アクセスを防ぐためのラムダ式関数
//h,wが共にnの場合とかもあるので、適宜書き換える

// auto outof = [&](uint y, uint x){
//     return y>=h or x>=w;
// };




int main() {

}
