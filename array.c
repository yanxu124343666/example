#include "include/array.h"

int find_Max(int A[],int m){
    int i,max=A[m];
    for(i=m;A[i]!=0;i++)
       if(A[i]>max)    max=A[i];
    return max;
}

int find_Min(int A[],int m){
    int i,min=A[m];
    for(i=m;A[i]!=0;i++)
       if(A[i]<min)    min=A[i];
    return min;
}

int Search(int A[],int x){
    int i;
    for(i=0;A[i]!=0;i++)
       if(A[i]==x)    return i;
    return -1;

}

void Sort(int A[],int n){
    int i,p,q,t;
    for(i=0;i<n;i++)
    {
       p=find_Min(A,i);
       q=Search(A,p);
       t=A[q];
       A[q]=A[i];
       A[i]=t;
    }
    
}   


