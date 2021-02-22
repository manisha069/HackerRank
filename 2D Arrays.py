#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(arr):
    suma=[]
    for i in range(4):
        for j in range(4):
            curr_sum=0
            curr_sum += arr[i][j]+arr[i][j+1]+arr[i][j+2]
            curr_sum += arr[i+1][j+1]
            curr_sum += arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
            suma.append(curr_sum)
    return max(suma)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
