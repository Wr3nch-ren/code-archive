#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

float recieveWidthHeight(float w, float l, struct Rectangle *rect) {
    rect->width = w;
    rect->height = l;
    return rect->width , rect->height;
}

void calRecArea(float w , float l , float *pArea) {
    *pArea = w * l;
}

float showRecArea(float *area){
    return *area;
}

void main() {
    struct Rectangle rect;
    float width,height,area;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    recieveWidthHeight(width,height,&rect);
    calRecArea(rect.width,rect.height, &area);
    printf("Rectangle area : %f",showRecArea(&area));
}
