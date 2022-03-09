//JUMP SEARCH
//1 5 13 34 55 89 96 144 223
Int jumpsearch(int A[],int key,int n)
{
  int m=sqrt(n);
  int i=0;
  While(A[m]<=key&&m<n)
  {
    i=m;
    m=m+sqrt(n);
    if(m>n-1)
      m=n;
  }
  for(k=1;k<m;k++)
  {
    if(A[k]==key)
      return k;
  }
  return -1;
}
