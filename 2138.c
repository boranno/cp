#include<stdio.h>
int main()
{
    char str[1001];
    while(scanf("%s",&str)!=EOF)
    {
        int arr[]={0,0,0,0,0,0,0,0,0,0};
        int i,j,k,temp,index=9;
        for(i=0;str[i]!='\0';i++)
        {
            k=str[i]-48;
            arr[k]++;
        }
        temp=arr[9];
        for(j=8;j>=0;j--)
        {
            if(temp<arr[j])
            {
                temp=arr[j];
                index=j;
            }
        }
        printf("%d\n",index);
    }
    return 0;
}
