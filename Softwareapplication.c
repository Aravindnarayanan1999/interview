#include <stdio.h>
#include<string.h>
int ya=2009,yb=2010,yc=2004,yd=2011,ye=2013,pa=13,pb=10,pc=9,pd=13,pe=8;
float va=2.2,vb=2.1,vc=4.4,vd=3.3,ve=3.2;
char na[15]="whatsapp",nb[15]="instagram",nc[15]="facebook",nd[15]="snapchat",ne[15]="telegram",aa[15]="brion",ab[15]="kevin",ac[15]="mark",ad[15]="evan",ae[15]="nikolai";
int main()
{
    int a;
    printf("1.Display all the details of application by a given author.\n2.Sort the details of application in the increasing order of price.\n3.Display the details of application published by a given publisher in a given year\n4.Sort the list of application in the increasing order of two fields , author and publishing year of the books..");
    printf("\nEnter the case:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:detail();break;
        case 2:sort();break;
        case 3:publish();break;
        case 4:author();break;
        default:printf("INVALID");
    }
}
int detail()
{
    char in[15];
    int n;
    printf("Enter the author name:");
    scanf("%s",&in);
    n=strlen(in);
    if(n==5||n==4||n==7)
    {
        if(strcmp(in,aa)==0)
        printf("Name:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,va,ya,pa);
        else if(strcmp(in,ab)==0)
        printf("Name:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,vb,yb,pb);
        else if(strcmp(in,ac)==0)
        printf("Name:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,vc,yc,pc);
        else if(strcmp(in,ad)==0)
        printf("Name:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,vd,yd,pd);
        else if(strcmp(in,ae)==0)
        printf("Name:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ve,ye,pe);
        else
        printf("INVALID");
    }
}
int sort()
{
    int t,i,j,b[5];
    b[0]=pa;b[1]=pb;b[2]=pc;b[3]=pd;b[4]=pe;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
        if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
        }
    }
    if(b[0]==pa)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[0]==pb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[0]==pc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[0]==pd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[0]==pe)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe); 
    printf("\n\n");
    
    if(b[1]==pa)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[1]==pb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[1]==pc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[1]==pd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[1]==pe)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
    
    if(b[2]==pa)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[2]==pb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[2]==pc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[2]==pd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[2]==pe)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
    
    if(b[3]==pa)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[3]==pb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[3]==pc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[3]==pd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[3]==pe)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
    
    if(b[4]==pa)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[4]==pb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[4]==pc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[4]==pd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[4]==pe)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
}
int publish()
{
    char at[15];
    int y;
    printf("Enter the publisher name:");
    scanf("%s",&at);
    printf("Enter the year:");
    scanf("%d",&y);
    if(strcmp(at,aa)==0&&y==ya)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(strcmp(at,ab)==0&&y==yb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(strcmp(at,ac)==0&&y==yc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(strcmp(at,ad)==0&&y==yd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(strcmp(at,ae)==0&&y==ye)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    else
    printf("INVALID PUBLISHER AND YEAR");
}
int author()
{
    int t,i,j,b[5];
    b[0]=ya;b[1]=yb;b[2]=yc;b[3]=yd;b[4]=ye;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
        if(b[i]>b[j])
        {
            t=b[i];
            b[i]=b[j];
            b[j]=t;
        }
        }
    }
    if(b[0]==ya)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[0]==yb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[0]==yc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[0]==yd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[0]==ye)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe); 
    printf("\n\n");
    
    if(b[1]==ya)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[1]==yb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[1]==yc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[1]==yd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[1]==ye)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
    
    if(b[2]==ya)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[2]==yb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[2]==yc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[2]==yd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[2]==ye)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
    
    if(b[3]==ya)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[3]==yb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[3]==yc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[3]==yd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[3]==ye)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
    
    if(b[4]==ya)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",na,aa,va,ya,pa); 
    else if(b[4]==yb)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nb,ab,vb,yb,pb);
    else if(b[4]==yc)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nc,ac,vc,yc,pc);
    else if(b[4]==yd)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",nd,ad,vd,yd,pd);
    else if(b[4]==ye)
    printf("Name:%s\nAuthor:%s\nVersion:%.2f\nYear:%d\nPrice:$%d",ne,ae,ve,ye,pe);
    printf("\n\n");
}
