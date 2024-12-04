#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;
string b1, q1, b2, q2;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  cin >> b1 >> q1 >> b2 >> q2;

  auto sub1 = ostringstream{};
  auto sub2 = ostringstream{};

  for (auto i = 0; i < N; ++i) {
    if (b1[i] == b2[i]) {
      sub1 << q1[i];
      sub2 << q2[i];
    }
  }

  auto r1 = static_cast<string>(sub1.str());
  auto r2 = static_cast<string>(sub2.str());

  if (r1 == r2) {
    cout << r1;
  } else {
    cout << "htg!";
  }

  return 0;
}