#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double x;
    double y;
}Point;


int main(){
    int n;
    double length;
    printf("Number of Points: ");
    scanf("\n%d", &n);
    Point pos[n];

    for (int i = 0; i < n; i++){
        printf("P%d.X: ", i+1);
        scanf("\n%lf", &pos[i].x);
        printf("P%d.Y: ", i+1);
        scanf("\n%lf", &pos[i].y);
    }

    printf("Length:\n");

    for(int i = 0; i < n-1; i++){
        length = pow(pos[i].x - pos[i+1].x, 2) + pow(pos[i].y - pos[i+1].y, 2);
        length = sqrtf(length);
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n",i+1, pos[i].x, pos[i].y, i+2, pos[i+1].x, pos[i+1].y, length);
    }

}