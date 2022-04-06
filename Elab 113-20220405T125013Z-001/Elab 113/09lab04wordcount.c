#include<stdio.h>
#include<string.h>

struct Word {
    char word[21];
    int count;
};

int main(){
        char input[21];
        int i, last_word = 0, find = 0;
        struct Word data[20] = {0};
        scanf("%s", input);

        while(1){
            if (strstr(input, "exit")) {
                break;
            }

            for (find = 0; find < last_word; find++){
                if (strstr(data[find].word, input)){
                    last_word--;
                    break;
                }
            }
            
            strcpy(data[find].word, input);
            data[find].count += 1;
            last_word++;
            scanf("%20s", input); 
        }

        printf("Output:\n");
        for(i=0;i<last_word;i++){
            printf("%s = %d\n", data[i].word, data[i].count);
        }
}