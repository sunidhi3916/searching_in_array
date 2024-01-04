#include<stdio.h>

void search(int b[],int var);
void main()
{
    int a[5]={5,2,6,7,9};
    int key;
    printf("enter the key to search\n");
    scanf("%d",&key);
    search(a[5],key);
    
}
void search(int b[],int var)
{
for(int i=0;i<5;i++)
    {
        if(b[i]==var)
        {
            printf("%d is found at %d index \n",var,i);
        }
        else{
            printf("data not found\n");
        }
    }
}