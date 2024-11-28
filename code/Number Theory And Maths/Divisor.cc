constexpr ll N = 1000005;
ll Prime[N + 4], kk;
bool notPrime[N + 5];
void SieveOf() {
    notPrime[1] = true;
    Prime[kk++] = 2;
    for (ll i = 4; i <= N; i += 2) notPrime[i] = true;
    for (ll i = 3; i <= N; i += 2) {
        if (!notPrime[i]) {
            Prime[kk++] = i;
            for (ll j = i * i; j <= N; j += 2 * i) notPrime[j] = true;
        }
    }
}
void Divisors(ll n) {
    ll sum = 1, total = 1;
    ll mnP = INT_MAX, mxP = INT_MIN, cntP = 0, totalP = 0;
    for (ll i = 0; i <= N && Prime[i] * Prime[i] <= n; i++) {
        if (n % Prime[i] == 0) {
            mnP = min(mnP, Prime[i]);
            mxP = max(mnP, Prime[i]);
            ll k = 0;
            cntP++;
            while (n % Prime[i] == 0) {
                k++;
                n /= Prime[i];
            }
            sum *= (k + 1);  // Number of Divisors
            totalP += k;
            ll s = 0, p = 1;
            while (k-- >= 0) {
                s += p;
                p *= Prime[i];
            };
            total *= s;  // Sum of Divisors
        }
    }
    if (n > 1) {
        cntP++, totalP++;
        sum *= 2;
        total *= (1 + n);
        mnP = min(mnP, n);
        mxP = max(mnP, n);
    }
    cout << mnP << " " << mxP << " " << cntP << " " << totalP << " " << sum << " " << total << "\n";
}