#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

// Å‘å1000•¶š‚Ü‚Å
#define SIZE 1000

// dp—pmapping
static int d[SIZE][SIZE];


// •ÒW‹——£‚ğ‹‚ß‚é
int edit_distance_dp(const string& str1, const string& str2)
{
	for (int i = 0; i < str1.size() + 1; i++) d[i][0] = i;
	for (int i = 0; i < str2.size() + 1; i++) d[0][i] = i;

	for (int i = 1; i < str1.size() + 1; i++) {
		for (int j = 1; j < str2.size() + 1; j++) {
			int cost = d[i - 1][j - 1] + (str1[i - 1] == str2[j - 1] ? 0 : 1);
			d[i][j] = min(min(d[i - 1][j], d[i][j - 1]) + 1, cost);
			cout << d[i][j];
		}
		cout << endl;
	}

	return d[str1.size()][str2.size()];
}

string snake(int x, int y, string str1, string str2) {
	string s;
	if (x == 0 || y == 0) return "\n";
	if (str1[x - 1] == str2[y - 1]) {

	}

}

int main()
{
	string str1, str2;

	cin >> str1;
	cin >> str2;

	cout << edit_distance_dp(str1, str2);

	return 0;

}