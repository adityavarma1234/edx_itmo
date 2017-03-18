#include<iostream>
#include<algorithm>
using namespace std;
int sumvals[1000002], snowmen[1000002], lastsnow[1000002],val[1000002];
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n,t,x,currsumval=0;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    cin >> t >> x;
    //cout << t << " " << x << endl;
    if(x!=0)
    {
      sumvals[currsumval + 1] = sumvals[lastsnow[t]] + x;
      lastsnow[i+1] = currsumval + 1;
      snowmen[i+1] = sumvals[lastsnow[i+1]];
      //cout << sumvals[currsumval+1] << " " << snowmen[i+1] << " " << lastsnow[i+1] << endl;
      val[i + 1] = t;
      currsumval++;
    }
    else 
    {
      lastsnow[i+1] = lastsnow[val[t]];
      val[i+1] = t;
      snowmen[i+1] = sumvals[lastsnow[i+1]];
      //cout << sumvals[currsumval+1] << " " << snowmen[i+1] << " " << lastsnow[i+1] << endl;
    }
  }
  int ans=0;
  for(int i=1;i<=n;i++)
    ans += snowmen[i];
  cout << ans << endl;
  return 0;    
}
