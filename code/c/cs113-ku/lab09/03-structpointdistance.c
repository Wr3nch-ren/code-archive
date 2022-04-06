#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct __Point__
{
    double x, y;
}Point;

int main(){
    int n,i;
    printf("Number of Points: ");
    scanf("\n%d",&n);
    Point points[n];
    for(i = 0; i < n; i++){
        printf("P%d.X: ",i+1);
        scanf("\n%lf",&points[i].x);
        printf("P%d.Y: ",i+1);
        scanf("\n%lf",&points[i].y);
    }
    double xdiff,ydiff,c;
    printf("Length:\n");
    for(i = 0; i < n-1; i++){
        xdiff = points[i].x-points[i+1].x;
        ydiff = points[i].y-points[i+1].y;
        c = sqrtf(xdiff*xdiff+ydiff*ydiff);
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n"
        ,i+1,points[i].x,points[i].y,i+2,points[i+1].x,points[i+1].y,c);
    }
}
