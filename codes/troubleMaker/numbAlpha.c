#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void more(char a[],int m)
{
    
    int num=0,alpha=0;
    
    for(int i=0;i<m;i++)
    {
        int k=a[i];
        //printf("%c %d\n",a[i],k);
        if(k>47 && k<58)
            num++;
        else
            alpha++;
        
    }
    
    if(num>alpha)
    {
        printf("NUMBER\n");
    }
    else
        printf("ALPHABET\n");
    
    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    
    int n,i,j,k;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int m;
        
        scanf("%d",&m);
        //printf("value of m : %d\n",m);
        char a[m];
        for(j=0;j<m;j++)
        {
            
            scanf("%c",&a[j]);
            if(a[j]==' ' || a[j]=='\n')
            {
                j--;
            }
            else{
            //printf("%c %d\n",a[j],a[j]);
            }
         }
        more(a,m);
        
        
        
    }
    
    
    
    return 0;
}