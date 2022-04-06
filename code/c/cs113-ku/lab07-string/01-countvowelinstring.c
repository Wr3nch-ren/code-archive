#include <stdio.h>

int main() {
    int counter = 0;
    char str[20];
    printf("String (without a space): ");
    scanf("%s",str);
    for(int i=0; str[i] != '\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            printf("%c ",str[i]);
            counter += 1;
        }
    }
    if(counter>1)
        printf("\nThis string contains %d vowels.",counter);
    else
        printf("\nThis string contains %d vowel.",counter);
    return 0;
