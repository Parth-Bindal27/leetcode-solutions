int sumOfTheDigitsOfHarshadNumber(int x) {
    int temp = x, sum = 0;

    while (temp != 0) {
        int digit = temp%10;
        sum += digit;
        temp /= 10;
    }

    if (x%sum == 0) return sum;

    return -1;
}