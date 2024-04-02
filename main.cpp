#include <bits/stdc++.h>
using namespace std;

int calc(int n, int x) {
    if (x < 0 || x > 5) {
        return -1;
    }
	if (n == 0) {
		if (x <= 1) {
			return 7;
		} else if (x <= 3) {
			return 15;
		} else {
			return 30;
		}
	}
	else if (n == 1) {  
		if (x <= 1) {
			return 5;
		} else if (x <= 3) {
			return 10;
		} else {
			return 20;
		}
	} else {
        return -1;
    }
}

int main() {
	int n, x;
	cin >> n >> x;
    cout << calc(n, x);
	return 0;
}