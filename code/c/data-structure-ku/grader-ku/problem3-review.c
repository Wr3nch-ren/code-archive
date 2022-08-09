#include <stdio.h>

typedef struct __review__
{
    double rateScore;
    char name[50];
    int id;
}Review;

int main(){
    int n,i,j;
    scanf("%d",&n);
    if(n<0){
        printf("ERROR");
    }else if (n==0){
        printf("No reviews found");
    }else{
        Review review[n];
        for(i = 0; i < n; i++){
            scanf("%lf %s",&review[i].rateScore,review[i].name);
            review[i].id = i+1;
        }
        double sum = 0;
        for(i = 0; i < n; i++){
            sum += review[i].rateScore;
        }
        double average = sum/n;
        printf("Average Score: %.2lf",average);
        for(j = 0; j < n; j++){
            for(i = 0; i < n-1; i++){
                if(review[i].rateScore > review[i+1].rateScore){
                    Review temp = review[i];
                    review[i] = review[i+1];
                    review[i+1] = temp;
                }
                else if(review[i].rateScore == review[i+1].rateScore){
                    if(review[i].id < review[i+1].id){
                        Review temp = review[i];
                        review[i] = review[i+1];
                        review[i+1] = temp;
                    }
                }
            }
        }
        for(i = n-1; i >= 0; i--){
            printf("\n%.2lf %s (id: %d)",review[i].rateScore,review[i].name,review[i].id);
        }
    }
    return 0;
}  