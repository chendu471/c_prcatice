#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
char str[]="technologies";
int n=strlen(str),MAX_CHAR=256;
int count[MAX_CHAR];
int index[MAX_CHAR],i=0;

for(i = 0; i < MAX_CHAR; i++) {
      count[i] = 0;
      index[i] = n;
   }
   for (int i = 0; i < n; i++) {
      char x=str[i];
      ++count[x];
      if (count[x] == 1 && x !=' ')
         index[x] = i;
      if (count[x] == 2)
         index[x] = n;
   }
  
for ( i=0; i<MAX_CHAR && index[i] != n; i++)
   printf("%c",str[index[i]]);

return 0;
}

