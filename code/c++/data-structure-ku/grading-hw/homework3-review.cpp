#include <stdio.h>
#include <string.h>

typedef struct __review__
{
    float rateScore;
    char name[50];
    int rank;
}Review;

int main(){
    float rating,avg;
    char rater[50];
    int n,i,j,k;
    scanf("%d",&n);
    if(n<0){
        printf("ERROR");
    }else if (n=0){
        printf("No reviews found");
    }else{
        Review review[n];
        for(i = 0; i < n; i++){
        scanf("\n%lf %s",rating,rater);
            strcpy(review[i].name,rater);
            review[i].rateScore = rating;
        }
        for(j = 0; j < n ; j++){
            avg+=review[j].rateScore;
        }
        avg/=n;
        printf("Average Score: %f",avg);
    
    }
}