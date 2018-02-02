#include <bits/stdc++.h>
using namespace std;
int main() {
	double x, n;
	while (cin >> n >> x) {
		printf("%.f\n", pow(x, 1.0 / n));
	}
	return 0;
}
