#include <stdio.h>

int charcount(char *s)
{
   
    int strlen = 0;
    for(int i = 0; s[i] != '\0'; i++){
        strlen++;
    }
    return strlen;

}

void charweave(char *s,char *result)
{
    int len = charcount(s);
    int i,j,k=0;
    for(i=0,j=len-1;i<len;i++,j--){
        result[k] = s[i];
        k++;
        result[k] = s[j];
        k++;
    }
    result[k] = '\0';

}

main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}