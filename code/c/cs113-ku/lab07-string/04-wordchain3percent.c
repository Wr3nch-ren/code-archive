#include <stdio.h>
#include <string.h>
int main(){
    int charsize,loopsize,breakstatus = 0,diff = 0;
    scanf("%d",&charsize);
    scanf("%d",&loopsize);
    char wordlist[20];
    char prevword[20];
    for(int i = 0;i < loopsize;i++){
        scanf("%s",wordlist);
        diff = 0;
        if(i == 0)
            strcpy(prevword,wordlist);
        else for(int j = 0;breakstatus != 1,j < charsize;j++){
            if(wordlist[j]!=prevword[j]){
                diff++;
                if(diff>2){
                    breakstatus = 1;
                    break;
                }
            }
        }
        if(breakstatus != 1)
            strcpy(prevword,wordlist);
    }
    printf("%s",prevword);
}