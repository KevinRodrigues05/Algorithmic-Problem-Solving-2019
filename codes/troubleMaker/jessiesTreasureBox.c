#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,count=0,j;
    scanf("%d",&n);
    
    if(n==0)
    {
        return(0);
    }
    
    char a[n];
    
    
    
    for(int i =0 ; i<n; i++)
    {
        scanf("%c",&a[i]);
        
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i==j)
        {
            count++;
            
        }
    }
    
    //printf("%d",count);
    
    int b[count];
    
    memset(b,1,count*sizeof(b[0]));
    
    for(int i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i!=j)
        {
            b[j]++;
        }
        
    }
    
    int l=0,in;
    for(j=0;j<count;j++)
    {
        if(l<b[j])
        {
            l=b[j];
            in=j;
        }
    }
    
    printf("%c",a[in]);
    
    
    return 0;
}