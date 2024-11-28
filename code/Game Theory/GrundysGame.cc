// The starting configuration is a single heap of objects. The two players take turn splitting a single heap into two heaps of different sizes. The player who can't make a move loses./ In each turn, a player can pick any pile and divide it into two unequal piles. 
// If a player cannot do so, he/she loses the game.
int mex(vector<int> v) {
	sort(v.begin(), v.end());
	int ret = 0;
	for(int i=0; i<(int) v.size(); ++i) {
		if(v[i] == ret) ++ret;
		else if(v[i] > ret) break;
	}
	return ret;
}
const int N = 1e3 + 7;
int dp[N];
int g(int n) {
	if(n == 0) return 0;
	if(dp[n] != -1) return dp[n];

	vector<int> gsub;
	for(int i=1; i<n-i; ++i) {
		int cur = g(i) xor g(n-i);
		gsub.push_back(cur);
	}
	dp[n] = mex(gsub);
	return dp[n];
}
int main() {
	memset(dp, -1, sizeof dp);
int n;
	while(cin >> n) {
		if(g(n) > 0) cout << "First\n";
		else cout << "Second\n";
	}
}
