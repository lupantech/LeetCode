char* longestCommonPrefix(char** strs, int strsSize) {
    char* str = strs[0]; // first string
    if (strsSize == 0) return "";
    
    for (int i = 1; i < strsSize; i++){
        int j = 0; //starts from the 1st char in str
        while (str[j] && strs[i][j] && str[j] == strs[i][j])
            j++;
        str[j] = 0; //0等价于'\0'
    }
    return str;
}