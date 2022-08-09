#include <stdio.h>

int main(){
    char s1[6] = "hello", s2[6] = "world";
    int i,j;
    for (i = 0; s1[i] != '\0'; ++i);
    for (j = 0; s2[j] != '\0'; i++, j++){
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("%s\n",s1);
}