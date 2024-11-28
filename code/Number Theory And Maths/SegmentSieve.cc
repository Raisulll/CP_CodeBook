void SegmentSieve(ll L, ll R){
  //call sieve first
    if (L == 1)
        L++;
    ll maxN = R - L + 1;
    ll a[maxN] = {0};
    for (auto p : prime){
        if (p * p <= R)
        {
            ll x = (L / p) * p;
            if (x < L)
                x += p;
            for (ll i = x; i <= R; i += p)
            {
                if (i != p)
                    a[i - L] = 1;
            }
        }
        else
            break;}
    for (ll i = 0; i < maxN; i++)
        if (a[i] == 0)
            cout << i + L << endl;
}
