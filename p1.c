#include<stdio.h>

int gcd(int n1,int n2,int *basiccount)
{
    if(n1==0)
    {
        
        return n2;
    }
       if(n2==0)
    {
        
        return n1;
        
    }

    if(n1>n2)
    {
        (*basiccount) ++;
        
        return gcd(n2,n1%n2,basiccount);
        
    }
    else 
    { 
        (*basiccount) ++;
        return gcd(n2,n1%n2,basiccount);

    }
}
int gcd1(int n1,int n2,int *basiccount1)
{
int i,c;
c=n1>=n2?n2:n1;
i=c;
   while (i>=1)
{
    (*basiccount1)++;
    if((n1%i==0)&&(n2 %i==0))
    {
        
        return(i);
    }
    
    else{
        i--;
    }
}



}
    

int main()
{
  
 int basiccount=0;
 int basiccount1=0;
int n1,n2;
    printf("enter the two numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("gcd of the two numbers is" "%d %d %d\n",n1,n2,gcd(n1,n2,&basiccount));
    printf("%d\n",basiccount);
    printf("%d\n",gcd1(n1,n2,&basiccount1));
    printf("%d\n",basiccount1);
    return 0;
}