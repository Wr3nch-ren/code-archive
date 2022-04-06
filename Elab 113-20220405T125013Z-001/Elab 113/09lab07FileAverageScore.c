#include <stdio.h>

double findAverage(char *filename){
    FILE *fin;
    double total, temp, count;
    
    fin = fopen(filename, "r");
    if (fin == NULL){
        fprintf(stderr, "File %s not found\n", filename);
        return 1;
    }

    while(!feof(fin)){
        fscanf(fin, "%lf", &temp);
        total += temp;
        count++;
    }
    count--;
    total -= temp;
    
    fclose(fin);
    return total/= count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}