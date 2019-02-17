#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x,y,t1=0,t2=1;
    
    scanf("%d%d%d",&n,&x,&y);
   
    int a[n],nextTerm;
    
    for (int i=0;i<n;i++)
    {
        
        a[i]=t1;
        //printf("%d ",a[i]);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    
    }
    int c,sum=0,len;
    
    if(y>=n)
        len=y-1;
    else
        len=y;
    
  
    for(int i=x;i<=len;i++)
     {
          c=0;
          for(int j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    c=1;
                    break;
               }
          }
          if(c==0)
          {
               sum+=a[i];
               
          }
     }
    
    printf("%d",sum);

    
    return 0;
}
