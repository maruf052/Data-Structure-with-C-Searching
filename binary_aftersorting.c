#include <stdio.h>
int main() 
{
    int n,i,j,temp;
    char search,array[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d characters: ",n);
    for (i=0;i<n;i++) 
    {
        scanf(" %c", &array[i]);
    }
    for (i=0;i<n-1;i++) 
    {
        for (j=0;j<n-i-1;j++) 
        {
            if (array[j]>array[j+1]) 
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i=0;i<n;i++) 
    {
        printf("%c ", array[i]);
    }
    printf("\n");
    printf("Enter character to find: ");
    scanf(" %c", &search);
    int minimum=0,maximum=n-1,middle;
    while (minimum<=maximum) 
    {
        middle=(minimum+maximum)/2;
        if (array[middle]<search) 
        {
            minimum=middle+1;
        } 
        else if (array[middle]==search) 
        {
            printf("%c found at location %d.\n", search,middle+1);
            return 0;
        } 
        else
        {
            maximum=middle-1;
        }
    }
    printf("Not found! %c isn't present in the list.\n", search);
    return 0;
}