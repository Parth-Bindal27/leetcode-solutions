bool checkRecord(char* s) {
    int countA = 0;

    for (int i = 0; i < strlen(s); i++){
        if (s[i] == 'A'){
            countA++;
        }
        if (s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L'){
            return false;
        }
    }

    if (countA < 2) return true;

    return false;
}