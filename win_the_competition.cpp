#include<iostream>
#include<algorithm>
using namespace std;
int a[16];
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  cin >> n;
  for(int i=0;i<n;i++)
    cin >> a[i];
  sort(a, a+n);
  int ans=0, cnt = 18000;
  for(int i=0;i<n;i++)
  {
    if(cnt - a[i] >= 0)
    {
      ans++;
      cnt -= a[i];
    }
  }
  cout << ans << endl;
  return 0;    
}
