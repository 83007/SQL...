
#include<stdio.h>

int main()
{


    FILE *fp;
    int number,quantity,i;
    float price,value;
    char item[10],filename[10];
    printf("input file name:\n");
    scanf("%s",&filename);
    fp=fopen(filename,"w");
    printf("input product names:\n\n");
    printf("itemname number price quantity\n");
    for( i=0; i<3; i++)
    {
        fscanf(stdin,"%s %d %f %d",&item,&number,&price,&quantity);
        fprintf(fp,"%s %d %.2f %d",item,number,price,quantity);
    }
    fclose(fp);
    fprintf(stdout,"\n\n");
    fp=fopen(filename,"r");
    printf("itemname    number     price     quantity     value\n");
    for(i=0; i<3; i++)
    {
        fscanf(fp,"%s %d %f %d",&item,&number,&price,&quantity);
        value=price*quantity;
        fprintf(stdout,"%8s\t%7d\t%8.2f\t%8d\t%11.2f\n",item,number,price,quantity,value);

    }
    fclose(fp);
}
