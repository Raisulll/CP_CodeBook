// Addition:
int mod_add(int a, int b, int MOD = mod){
    a = a % MOD, b = b % MOD;
    return (((a + b) % MOD) + MOD) % MOD;
}
// Subtraction:
int mod_sub(int a, int b, int MOD = mod){
    a = a % MOD, b = b % MOD;
    return (((a - b) % MOD) + MOD) % MOD;
}
// Multiplication:
int mod_mul(int a, int b, int MOD = mod){
    a = a % MOD, b = b % MOD;
    return (((a * b) % MOD) + MOD) % MOD;
}
// Division:
//call binary Exponential Function here.
int mminvprime(int a, int b) { return binaryExp(a, b - 2, b); }
//call modular multiplication here.
int mod_div(int a, int b, int MOD = mod) {
    a = a % MOD, b = b % MOD;
    return (mod_mul(a, mminvprime(b, MOD), MOD) + MOD) % MOD;
} 
//only for prime MOD
