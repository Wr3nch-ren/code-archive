#include <stdio.h>

struct plantPlace{
    char district[20];
    char province[20];
};

struct flowerInThailand {
    int id;
    char name[20];
    int price;
    struct plantPlace plantPlace;
};

int main(){
    struct flowerInThailand flower[3];
    for(int i = 0; i < 3; i++){
        flower[i].id = i+1;
        printf("Enter name: ");
        scanf("%s", flower[i].name);
        printf("Enter price: ");
        scanf("%d", &flower[i].price);
        printf("Enter district: ");
        scanf("%s", flower[i].plantPlace.district);
        printf("Enter province: ");
        scanf("%s", flower[i].plantPlace.province);
    }
    printf("\n");
    for(int i = 0; i < 3; i++){
        printf("Plant number: %d\n", flower[i].id);
        printf("Name: %s\n", flower[i].name);
        printf("Price: %d\n", flower[i].price);
        printf("District: %s\n", flower[i].plantPlace.district);
        printf("Province: %s\n", flower[i].plantPlace.province);
    }
    return 0;

}