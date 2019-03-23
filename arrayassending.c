#include<stdio.h>
void main()
{
    int i,j,a,n,number[100],temp;
    printf("enter the number of element :\n");
    scanf("%d",&n);

    printf("enter the element \n");
    for (i=0;i<n;i++)
        scanf("%d",&number[i]);
 
    for (i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(number[i] > number[j])
            {
                a=number[i];
                number[i] = number[j];
                number[j]=a;
            }
        }
    }

    printf("number is assending in order are given below \n");  
    for (i=0;i<n;++i)
    printf("%d\n",number[i]);
}