def bubbleSort(arr: List[int], n: int):
    # Your code goes here.
    if n<=1:
      return
    
    for j in range(n-1):
        if (arr[j]>arr[j+1]):
            arr[j+1],arr[j]=arr[j],arr[j+1]
    bubbleSort(arr,n-1)
