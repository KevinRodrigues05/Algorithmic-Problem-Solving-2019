#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    float f;
    
    scanf("%d",&n);
    f=sqrt(2)*n;
    // f=f*10;
    
    printf("%.4f",trunc(f*10000.0)/10000.0);
    return 0;
}