ll binaryExp(ll base, ll power, ll modulo=mod){
    ll and = 1;
    while (power){
        if (power % 2 == 1)
            ans = (ans * base) % modulo;
        base = (base * base) % modulo;
        power /= 2;
    }
    return ans;
}
//Function call: binaryExp(a,binaryExp(b,c,mod),mod);
