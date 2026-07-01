int arrangeCoins(int n) {
    int coins = n;
    int count = 0;
    
    for (int i = 1; i <= n; i++) {

        if (coins >= i) {
            coins -= i;
            count++;
        }
        else {
            return count;
        }
    }

    return count;
}