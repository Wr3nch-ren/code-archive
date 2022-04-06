#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper (const char *s){
    int i = 0;
    char *upper;
    upper = (char *)malloc(sizeof(s));

    while (s[i] != '\0'){
        if (islower(s[i]))
            upper[i] = s[i] - 32;
        else
            upper[i] = s[i];
        i++;
    }
    return upper;
}

int main(){
	char s[100];
	char* result; 

	scanf("%s",s);
	result = stoupper(s); //ส่งพ้อยเตอร์มา
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}