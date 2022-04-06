#include <stdio.h>

int main(){
    int len, num, i, j, count;
    scanf("%d", &len);
    scanf("%d", &num);
    char word[num][len+1];

    /* assign */
    for (i = 0; i < num; i++){
        scanf("%s", word[i]);
    }

    /* check */
    for (i = 0; i < num ; i++){
        int count = 0;
        // printf("-----\n");
        for (j = 0; j < len; j++){
            // printf("word%d][%d] = %c\n",i, j, word[i][j]);
            // printf("word[%d][%d] = %c\n",i+1, j, word[i+1][j]);
            if (word[i][j] != word [i+1][j]){
                count++;
            }
        // printf("count = %d\n\n", count);
            }
        if (count > 2){
            break; 
        }
            
    }
    printf("%s",word[i]);
}