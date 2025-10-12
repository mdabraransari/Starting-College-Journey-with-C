#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxlineChar);
void copy(char to[], char from[]);
int main()
{
  int len;
  char line[MAXLINE];
  char longest[MAXLINE];
  int max = 0;
  while ((len = get_line(line, MAXLINE)) > 0)
  {
    if(len > max) {
      max = len ;
      // copy(longest, line);
    }
  }
  if ( max > 0){
    printf("%d", max);
  }
  
  return 0;
}
int get_line(char s[], int lim)
{
  int i, c;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }
  // if (c == '\n')
  // {
  //   s[i] = c;
  //   ++i;
  // }
  s[i] = '\0';
  return i;
}
void copy(char to[], char form[]){
    int i;
    i = 0;
    while ((to[i] = form[i]) != '\0')
    {
      ++i;
    }
    
}