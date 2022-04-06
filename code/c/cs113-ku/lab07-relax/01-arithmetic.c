#include <stdio.h>

int main(){
int a=4, b=3, c, d, e;
float f=2,g=5, h, i, j, k;

c = f/b*f;                 /* c = 1 */
h = a++/(float)b;          /* h = 1.33 */
j = (float)c/h--;          /* j = 0.75 */
d = b*h/c;                 /* d = 1 */
i = d*f+h--;               /* i = 2.33 */
e = a*d++/i;               /* e = 2 */
k = (int)i*d/(float)a;     /* k = 0.8 */
}