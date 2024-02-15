
int checkPal(int i, int j, char* str) {

  while (i < j) {
    if (str[i] != str[j]) return 0;
    i++;
    j--;
  }
  return 1;
}
int countSubstrings(char * s)
 {
      int n = strlen(s);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int p = i; p < n; p++) {
      if (checkPal(i, p, s) == 1) {
        sum++;
      }
    }
  }

  return sum;
 }