#include<stdio.h>



void main()
{
        int a[8]={-2,-3,4,-1,-2,1,5,-3},max=0,tmax=0;
        

        for(int i=0;i<8;i++)
        {
            tmax+=a[i];
            if(tmax<0)
                tmax=0;
            if(max<tmax)
                max=tmax;


        }

    printf("%d\n",max);
}