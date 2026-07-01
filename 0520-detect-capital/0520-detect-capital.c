bool detectCapitalUse(char* word) {
    int n = strlen(word);
    int countlower = 0;
    int countupper = 0;

    if (isupper(word[0])) {
        for (int i = 1; i < n; i++) {
            if (!(isupper(word[i]))) countlower++;

            if (isupper(word[i])) countupper++;
        }

        if (countlower == n - 1 || countupper == n - 1)
            return true;
        else
            return false;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (!(isupper(word[i]))) countlower++;
        }
    }

    if (countlower != n) return false;

    return true;
}