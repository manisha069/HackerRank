#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the beautifulTriplets function below.
def beautifulTriplets(d, arr):
    xx=[]
    for i in range(len(arr)):
        a=arr[i]
        b=arr[i]+d
        c=arr[i]+(2*d)
        if b in arr and c in arr:
            xx.append([a,b,c])
    return len(xx)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    arr = list(map(int, input().rstrip().split()))

    result = beautifulTriplets(d, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
