#include<stdio.h>
char s[88];
int main()
{
    while(~scanf("%s",s))
    {
        int f=0;
        for(int i=0; s[i]; i++)
            if(!((s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='F')||(i%5==4&&s[i]==':')))              f=1;
        if(f)printf("It's not a IPv6 address!\n");
        else
        {
            int a[9],f2=0;
            sscanf(s,"%X:%X:%X:%X:%X:%X:%X:%X",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
            for(int i=0; i<8; i++)
            {
                if(a[i]==0&&!f)
                {
                    int f1=0;
                    for(i=i+1; i<8; i++)
                        if(a[i]!=0)break;
                        else f1=1;
                    i--;
                    if(f1)
                    {
                        f=1;
                        if(!f2&&i==7)printf("::");
                        else if(!f2||i==7)printf(":");
                    }
                    else printf("0");
                }
                else printf("%X",a[i]);
                if(i==7)putchar(10);
                else {putchar(':');f2=1;}
            }
        }
    }
    return 0;
}