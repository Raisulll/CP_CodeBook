ll calNum(ll year) {
return (year / 4) - (year / 100) +
 (year / 400);
}
ll leapNum(ll l, ll r) {
	l--;
	return calNum(r) - calNum(l);
}
