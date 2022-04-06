#include <stdio.h>

struct vector {
  
    float uvx,uvy,uvz;

};

int main()
{
  
    struct vector vectorbase;
    float ux,uy,uz,vx,vy,vz;
    printf("Enter u: ");
    scanf("%f %f %f",&ux,&uy,&uz);
    printf("Enter v: ");
    scanf("%f %f %f",&vx,&vy,&vz);
    vectorbase.uvx = uy*vz-uz*vy;
    vectorbase.uvy = uz*vx-ux*vz;
    vectorbase.uvz = ux*vy-uy*vx;
    printf("u x v = %.1f %.1f %.1f",vectorbase.uvx,vectorbase.uvy,vectorbase.uvz);
    return 0;


  return 0;
}