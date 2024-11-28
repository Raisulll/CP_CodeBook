const int N = 1e7 + 5;
int prime[N];
void sieveOfEratosthenes() {
    for (int i = 2; i < N; i++)
        prime[i] = 1;
    for (int i = 4; i < N; i += 2)
        prime[i] = 0;
    for (int i = 3; i * i < N; i++) {
        if (prime[i]) {
            for (int j=i*i; j<N; j +=i*2)
                prime[j] = 0;
        }
    }
}
