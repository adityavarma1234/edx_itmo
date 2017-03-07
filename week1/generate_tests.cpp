#include<iostream>
using namespace std;
long long int arr[10000002];
long long int div1[10000002];
void sieve()
{
  for(long long int i=0;i<10000002;i++) arr[i] = 10000000000;
  for(long long int i=2;i<10000002;i++)
  {
    if(arr[i] == 10000000000)
    {
      arr[i] = i; 
      for(long long int j=i*i;j<10000002;j+=i)
      {
        if(arr[j] > i)
        arr[j] = i;
      }
    }
  }
}
void div1isors()
{
  for(int i=1;i<10000002;i++)
  {
    div1[i] = 1;
    long long int n=i, p = arr[i], k=0;
    while(n>1)
    {
      n = n/p;
      k++;
      if(arr[n] != p)
      {
        div1[i] = div1[i]*(k+1);
        k = 0;
      }
      p = arr[n];
    }
  }
}
long long int max(long long int a, long long int b)
{
  return a>b ? a: b;
}
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  sieve();
  div1isors();
  long long int n;
  cin >> n;
  int ind=1, ans=1;
  for(int i=1;i<=n;i++)
  {
    if(div1[i] > ans)
    {
      ans = div1[i];
      ind = i;
    }
  }
  cout << n - ind + 1 << endl;
  return 0;    
}
