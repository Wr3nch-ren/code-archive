#include <stdio.h>

double findAverage(char *filename)
{
    FILE *data;
    double total,count,temp;

    data = fopen(filename, "r");
    if (data == NULL){
        fprintf(stderr, "File %s not found\n", filename);
        return 1;
    }

    while(!feof(data)){
        fscanf(data, "%lf", &temp);
        total += temp;
        count++;
    }
    count--;
    total -= temp;

    fclose(data);
    return total /= count;

}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}