#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    char vowels[5] = {'a','e','i','o','u'};
    char count[5] = {0};
    int i=0, j, flag=0, numeric=0;
    scanf("%[^\n]s",str);
    if(str[0]=='\0')
    {
        printf("INVALID INPUT");
    }
    else
    {
        while(str[i]!='\0')
        {
            if(str[i]>=48 && str[i]<=57)
            {
                numeric++;
            }
            i++;
        }
        i=0;
        while(str[i]!='\0')
        {  
            for(j=0; j<5; j++)
            {
                if(str[i]==vowels[j] || str[i]==toupper(vowels[j]))
                {
                    flag++;
                }
            }
            i++;
        }
        if(numeric!=0 || flag==0)
        {
            printf("0");
        }
        else
        {
            i=0;
            while(str[i]!='\0')
            {
                for(j=0; j<5; j++)
                {
                    if(str[i]==vowels[j] || str[i]==toupper(vowels[j]))
                    {
                        count[j]++;
                    }
                }
                i++;
            }
            for(i=0;i<5;i++)
            {
                printf("%c : %d\n",vowels[i],count[i]);
            }
            i=0;
            while(str[i]!='\0')
            {
                flag = 0;
                for(j=0; j<5; j++)
                {
                    if(str[i]==vowels[j] || str[i]==toupper(vowels[j]))
                    {
                        flag++;
                    }
                }
                if(flag==0)
                {
                    printf("%c",str[i]);
                }
                i++;
            }
        }
    }
    return 0;
}
