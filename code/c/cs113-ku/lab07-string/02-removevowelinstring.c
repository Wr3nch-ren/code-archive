#include <stdio.h>

int remove_vowel(char str[])
{
  int i,j,str_size = 0;
  for (i = 0; str[i] != '\0' ; i++){
    str_size++;
  }
  for (i = 0; i < str_size ; i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
      for (j = i; j < str_size; j++){  
        str[j] = str[j+1];
      }
      i--;
      str_size--;
    }
  }

}

int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}