#include<iostream>
using namespace std;
int a[101], b[101];
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  for(int i=0;i<n;i++)
    cin >> a[i];
  for(int i=0;i<n;i++)
    cin >> b[i];
  bool as, bs;
  as  = false;
  bs = false;
  int ans = 0;
  for(int i=0;i<n;i++)
  {
    if(a[i] > b[i])
    {
       as = true;
       ans += a[i];
    }
    else if(b[i] > a[i])
    {
       bs = true;
       ans += b[i];
    }
    else
    {
       if(as) bs = true;
       else if (bs) as = true;
       else as = true;
       ans += a[i];
    }
  }
  int ind = 0;
  if(!as)
  {
    for(int i=1;i<n;i++)
     {
        if(b[i] - a[i] < b[ind] - a[ind])
        {
          ind = i;
        }
     }
    ans -= b[ind];
    ans += a[ind];
  }
  if(!bs)
  {
    for(int i=1;i<n;i++)
     {
        if(a[i] - b[i] < a[ind] - b[ind])
        {
          ind = i;
        }
     }
    ans -= a[ind];
    ans += b[ind];
  }
  cout << ans << endl;
  return 0;    
}
