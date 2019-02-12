#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the maxSubarray function below.
def maxSubarray(a):
    max1=0
    tmax=0
    umax=0
    flag=0
    for i in range(len(a)):
        
        tmax+=a[i];
        if a[i]>=0:
            umax+=a[i]

        if tmax<0:
            tmax=0

        if max1<tmax:
            max1=tmax


    for i in a:
        if i>=0:
            flag=1
    if flag==0:
        return (max(a),max(a))

        

    return max1,umax

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        arr = list(map(int, input().rstrip().split()))

        result = maxSubarray(arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()

