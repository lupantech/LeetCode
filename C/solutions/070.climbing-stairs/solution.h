int climbStairs(int n) {
    if(n <= 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;

    int n1 = 1, n2 = 1, fn = 0;
    for (int i = 2; i <= n; i++){
        fn = n1 + n2;
        n2 = n1;
        n1 = fn;
    }
    return fn;
}