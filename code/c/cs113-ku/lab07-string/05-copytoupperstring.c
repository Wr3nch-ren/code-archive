#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char *s) {
    int i;
    char *str_new;
    str_new = (char *)malloc(sizeof(s));
    for(i = 0; s[i] != '\0'; i++){
        if (islower(s[i])){
            str_new[i] = toupper(s[i]);
            //str_new[i] = s[i] - 32;
        }
        else
            str_new[i] = s[i];
    }
    str_new[i] = '\0';
    return str_new;

}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}