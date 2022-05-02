#include <stdio.h>
#include <ctype.h>
main(){static char str[10000];int upper=0,lower=0;scanf("%s",str);for(int i = 0;str[i];i++){if(isupper(str[i])) upper = 1;if(islower(str[i])) lower = 1;}if(upper && lower)printf("Mix");else if(lower)printf("All Small Letter");else printf("All Capital Letter");}