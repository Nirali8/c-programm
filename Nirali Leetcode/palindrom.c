
int isPalindrome(int no)
 {
    long temp = no;
    long rev = 0, rem;
    while (no > 0)
     {
        rem = no % 10;
        rev = rev * 10 + rem;
        no /= 10;
    }
    if (rev==temp)
        return 1;
    else
        return 0;
}
