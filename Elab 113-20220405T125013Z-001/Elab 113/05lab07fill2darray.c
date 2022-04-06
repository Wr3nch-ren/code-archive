#include <stdio.h>

int main() {
 int n, i, j;
 printf("Enter the number of rows or columns: ");
 scanf("%d",&n);
 int a[n][n];

// Assign value to array a
for (i = 0 ; i <= n ; i++){ // ไล่ array ตั้งแต่ index ที่ 0 ถึง n 
    a[i][0] = i + 1; // assign ค่าเริ่มต้น
    for (j = 1 ; j < n ; j++){ 
        a[i][j] = a[i][j-1] + 1; // เท่ากับค่าก่อน + 1 
    }
}

// Print all values in array a
for(i = 0; i < n; i++) { // 
    for(j = 0; j < n ; j++)
       printf("%2d  \0", a[i][j]);
    printf("\n");
 }
 return 0;
}