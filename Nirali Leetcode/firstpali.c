char* firstPalindrome(char** words, int wordsSize)
{
     for (int i = 0; i < wordsSize; i++) {
        char* str = words[i];
        int left = 0;
        int right = strlen(str) - 1;
        int flag = 1;
        while (left < right) {
            if (str[left] != str[right]) {
                flag = 0;
                break;
            }
            left++;
            right--;
        }
        if (flag) {
            return str;
        }
    }
    return "";
}