#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

int main()
{
    float radius = 1.5; 
    float sum =  4 * PI * pow(radius,3);
    printf("The volume of this sphere is %.2f", sum/3);
}