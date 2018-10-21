import numpy as np

def decimal_to_binary(n, len):
    result=[0]*len
    index = len-1
    while(n>0):
        result[index] = n%2
        n = n//2
        index-=1
    return result

def array_to_string(arr):
    result = ""
    for i in range(len(arr)):
        if arr[i] >= 1:
            result += "#"
        else:
            result += " "
    return result


if __name__ == "__main__":
    n = input()
    arr1 = input()
    arr2 = input()
    result = []
    for i in range(len(arr1)):
        result.append(array_to_string(np.array(decimal_to_binary(arr1[i],n))+np.array(decimal_to_binary(arr2[i],n))))
    print(result)
