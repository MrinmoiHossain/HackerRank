import numpy

def arrays(arr):
    return numpy.array(arr, float)[::-1]

arr = input().strip().split(' ')
result = arrays(arr)
print(result)
