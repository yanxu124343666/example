#include <stdio.h>

#include "include/array.h"

int main(void){
    int a[20]={2,7,4,16,5,35,25,8,19};
    int i,n,x,y,z,m;
    Sort(a,9);
    for(i=0;i<9;i++)
       printf("%d ",a[i]);
    printf("\n");
    x=find_Min(a,0);
    y=find_Max(a,0);
    z=Search(a,16);
    printf("Max is %d.\nMin is %d.\n",y,x);
    if(z!=-1)  printf("The location of 16 is %d.\n",z+1);
    else  printf("No 16!\n");
    return 0;
}
