#include <stdio.h>
int main(){int n,i=0,a=2000000000,b=-2000000000;scanf("%d",&n);for(;i<n;++i){int c;scanf("%d",&c);if(c<a)a=c;if(c>b)b=c;}printf("%d\n%d",a,b);}