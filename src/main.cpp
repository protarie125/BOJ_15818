#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	ll m;
	cin >> m;

	auto ans = ll{ 1 };
	for (auto i = 0; i < n; ++i) {
		ll x;
		cin >> x;
		ans *= x;
		ans %= m;
	}

	cout << ans;

	return 0;
}