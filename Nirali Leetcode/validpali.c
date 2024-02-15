int isAlphaNumber(char c) {
    if (c >= 'a' && c <= 'z') return 1;
    if (c >= 'A' && c <= 'Z') return 1;
    if (c >= '0' && c <= '9') return 1;
    return 0;
}
int isPalindrome(char* s) 
{
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        while (left < right && !isAlphaNumber(s[left])) {
            left++;
        }
        while (left < right && !isAlphaNumber(s[right])) {
            right--;
        }
        if (tolower(s[left++]) != tolower(s[right--])) {
            return 0;
        }
    }
    return 1;
}