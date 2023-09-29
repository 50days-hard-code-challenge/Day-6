def insertionSort(a: List[int], n: int) -> None:
   # write your code here
   if n<=1:
      return
   insertionSort(a,n-1)
   last=a[n-1]
   j=n-2
   while (j>=0 and a[j]>last):
      a[j+1]=a[j]
      j=j-1
   a[j+1]=last
