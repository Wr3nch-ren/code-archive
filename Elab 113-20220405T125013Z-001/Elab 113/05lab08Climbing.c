#include <stdio.h>
int main(){
    int n, round = 1; 
    printf("Input number of stairs: ");
    scanf("%d",&n);
    printf("---- round %d ----\n",round);
    for (int i = 0; i < n-2; i++){
        printf("|---|\n");
    }
    printf("|-O-|\n");
    printf("|-^-|\n");
    round++;
    int up = n - 2 , down = 0;
    while (1){
        int step;
        printf("Input step command: ");
        scanf("%d", &step);
        if (step == 0){
            break;
        }
        printf("---- round %d ----\n",round);
        up -= step;
        down += step;   
        while (down > n - 2){
            up++;
            down--;
        }
        while (down < 0){
            up--;
            down++;
        }
        //printf("up = %d, down = %d\n",up,down);
        for(int i = up; i > 0;i--){
            printf("|---|\n");
        }
        printf("|-O-|\n");
        printf("|-^-|\n");
        for(int i = down; i > 0; i--){
            printf("|---|\n");
        }
        round++;
     }
}