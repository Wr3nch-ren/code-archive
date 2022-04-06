#include <stdio.h>

int main(){
int a=5, b=2;

//calculate seperately
a++%b>>2;        /* Ans1 = 0 */
a|b+3;           /* Ans2 = 5 */
(b<<1)*a;        /* Ans3 = 20 */
a+(7&b);         /* Ans4 = 7 */
--a*b%3<<2;      /* Ans5 = 8 */
(a+5*b>>1)<<2;   /* Ans6 = 28 */
}