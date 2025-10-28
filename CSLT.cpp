#include<stdio.h>
int Dem(int a, int KT(int));
int KTSL(int);
int KTSNT(int);
int KTSNT(int n)
{

if(n==1 || n==0) return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int KTSL(int a)
{
   if (a%2==0)
    return 0;

    return 1;}

int Dem(int a, int KT(int))
{
    int tmp,cout =0;
    int b,c=0;
    do {
        tmp = a % 10;a=a/10;
        if (KT(tmp) == 1) cout++;
    } while (a !=0);
    return cout;
    do {
        b = a % 10;a=a/10;
        if (KTSL(b)==1) c++;
    }while (a !=0);
    return cout;

}


void main(){
    int a= 1239;
    int d= Dem(a,KTSNT);
    int e= Dem(a,KTSL);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
}

