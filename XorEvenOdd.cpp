#include <bits/stdc++.h>
using namespace std;

string XorEvenOdd(int L, int R)
{
	int oddCount = (R - L) / 2;

	if (R % 2 == 1 || L % 2 == 1)
		oddCount++;

	if (oddCount % 2 == 0)
		return "Even";
	else
		return "Odd";
}

int main()
{
    int L = 5, R = 15;
    cout << XorEvenOdd(L, R);
}
