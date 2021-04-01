#include <bits/stdc++.h>
using namespace std;

void TransformSectoHour(int n)
{
	int hour = n / 3600;

	n %= 3600;
	int minutes = n / 60 ;

	n %= 60;
	int seconds = n;

	cout << "Hours = " << hour << ", " << "Minutes = " << minutes << ", " << "Seconds = " << seconds << " " << endl;
}

int main()
{
	int n;
	cout << "Number of seconds: ";
    cin >> n;
	TransformSectoHour(n);
	return 0;
}
