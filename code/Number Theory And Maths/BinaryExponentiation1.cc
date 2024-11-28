ll binaryExp(ll base,ll power,ll MOD = mod) {
    ll res = 1;
    while (power) {
        if (power & 1)
            res = (res * base) % MOD;
        base = ((base%MOD)*(base%MOD))%MOD;
        power /= 2;
    }
    return res;
}
