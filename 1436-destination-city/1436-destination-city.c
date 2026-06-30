char* destCity(char*** paths, int pathsSize, int* pathsColSize) {
    
    for (int i = 0; i < pathsSize; i++) {

        char *dest = paths[i][1];
        bool found = false;

        for (int j = 0; j < pathsSize; j++) {

            if (strcmp(dest, paths[j][0]) == 0) {
                found = true;
                break;
            }
        }

        if (!found)
            return dest;
    }

    return "";
}