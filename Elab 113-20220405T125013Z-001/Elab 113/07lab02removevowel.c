#include <stdio.h>

int remove_vowel(char str[]){
    int i = 0, j;
    while (str[i] != '\0'){
        if(str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                j = i;
                while(str[j]!= '\0'){
                    str[j] = str[j+1];
                    j++;
                }
        }
        else
            i++;
    }
}

int main(){ 
  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}