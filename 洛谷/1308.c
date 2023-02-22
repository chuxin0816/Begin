#include <stdio.h>
#include <string.h>
int main() {
  char word[11], article[1000001];
  int i = 0, n = 0, s, ss = 0, place;
  gets(word);
  strcat(word, " ");
  for (i = 0; word[i] != '\0'; i++) {
    if (word[i] >= 'A' && word[i] <= 'Z') word[i] += 32;
  }
  gets(article);
  strcat(article, " ");
  for (i = 0; article[i] != '\0'; i++) {
    if (article[i] >= 'A' && article[i] <= 'Z') article[i] += 32;
  }  //统一大小写
  for (i = 0; article[i] != '\0'; i++) {
    if (article[i] == ' ') {
      s=1;
      for (int j = 0, k = n; word[j] != '\0', k <= i; j++, k++) {
        if (word[j] == article[k])
          s *= 1;
        else
          s *= 0;
      }
      if (s == 1) {
        ss++;
        if (ss == 1) place = n;
      }
      n = i + 1;
    }
  }
  if (ss == 0)
    printf("-1");
  else
    printf("%i %i", ss, place);
  return 0;
}