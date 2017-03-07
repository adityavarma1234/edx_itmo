#include<iostream>
#include<cmath>
using namespace std;
int max(int a, int b)
{
  return a > b ? a: b;
}
int a[3][3];
int main()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      cin >> a[i][j];
  int ans = 0;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      for(int k=0;k<3;k++)
      {
        if(i !=j && j != k && i!= k)
        {
          ans = max(ans, a[0][i]*a[0][i] + a[1][j]*a[1][j] + a[2][k]*a[2][k]);
        }
      }
  printf("%.7f\n",sqrt(ans));
  return 0;    
}
