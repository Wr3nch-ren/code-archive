#include <stdio.h>
#define ARRAY_SIZE 98

int main() {

  int i, j;
  int A[ARRAY_SIZE] = {0}; 

  for (i = 2; i < ARRAY_SIZE; i++)
    A[i] = 1; // assign ค่าให้เป็น 1 ทั้งหมดตั้งแต่ index 2 - 97

  for (i = 2; i*i < ARRAY_SIZE; i++){
    for (j = 2; j < ARRAY_SIZE; j++){
        if (j % i == 0 && j != i){
            A[j] = 0; // ถ้าหารลงตัวก็ตัดทิ้ง โดยกำหนดค่าใหม่ให้เป็น 0
        }
        }
    }

for (i = 2; i < ARRAY_SIZE; i++)
    if(A[i]==1)
    printf("%d ",i);

printf("\n");

return 0;
}