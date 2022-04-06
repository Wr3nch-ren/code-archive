#include <stdio.h>

int main() {
    char str[50], vowel[10] = {'a','e','i','o','u','A','E','I','O','U'};
    int count = 0;

    printf("String (without a space): ");
    scanf("%s", str);
    for (char *c = str; *c != '\0'; *c++){
        for (int i = 0; i < sizeof(vowel); i++){
            if (*c == vowel[i]){
                count++;
                printf("%c ",vowel[i]);
            }
        }
    }
    printf("\n");
    if(count > 1){
        printf("This string contains %d vowels.",count);
    }
    else{
        printf("This string contains %d vowel.",count);
    }
}