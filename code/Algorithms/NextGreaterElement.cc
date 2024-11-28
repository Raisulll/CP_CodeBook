ll output[1000005];
void nextGreaterElement(ll x[], ll n) {
    stack<ll> s;
    s.push(0);
    for (ll i = 0; i < n; i++) {
        while (!s.empty() && x[s.top()] <= x[i]) {
            output[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()) {
        output[s.top()] = -1;
        s.pop();
    }
}
