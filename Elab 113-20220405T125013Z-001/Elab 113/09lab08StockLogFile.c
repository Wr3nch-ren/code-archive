#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;


void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}


void reportStock(char* filed) {

    char line[100],day[10],time[10],pn[30];
    double cost;
    int amo,count=0,name;
    FILE *fin;
    fin = fopen(filed, "r");
    
    fscanf(fin, "%d", &name);

    Product today[name];

    while (fgets(line,100,fin) != NULL) {
        sscanf(line,"%10[^,],%10[^,],%30[^,],%d,%lf\n",day,time,pn,&amo,&cost);

        if (count > 0) {
        Product subset;
        strcpy(subset.name,pn);
        subset.amount = amo;
        subset.totalCost = cost;

        word_count(today,subset);
        }
        count++;


    }

    fclose(fin);

    printStock(today,name);
}


void word_count(Product *code,Product target) {

    int i, flag=0;
    static int index = 0;

    for (i = 0;code[i].amount;i++) {
        if (!strcmp(target.name ,code[i].name)) {
            code[i].amount += target.amount;
            code[i].totalCost += target.totalCost;
            flag = 1;
        }

    }

    if (flag != 1) {
        strcpy(code[index].name, target.name);
        code[index].amount = target.amount;
        code[index].totalCost = target.totalCost;
        index++;
    }

}


int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}