bool backspaceCompare(char* s, char* t) {
    char processedS[201];
    char processedT[201];
    int indexS = 0, indexT = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != '#') {
            processedS[indexS++] = s[i];
        } else if (indexS > 0) {
            indexS--;
        }
    }
    processedS[indexS] = '\0';

    for (int i = 0; t[i] != '\0'; i++) {
        if (t[i] != '#') {
            processedT[indexT++] = t[i];
        } else if (indexT > 0) {
            indexT--;
        }
    }
    processedT[indexT] = '\0';

    return strcmp(processedS, processedT) == 0;
}