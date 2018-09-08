#include<iostream>
int _abs(int x)
{
    if(x>0)
    {
        return x;
    }
    else
    {
        return (-1)*x;
    }
}
int gcd_euclid(int u, int v) {
  int r;
  while (0 != v) {
    r = u % v; u = v; v = r; /* swap */
  }
  return u;
}
int main()
{
    int N,X;
    unsigned int x[100000];
    unsigned int D=0;

    std::cin>>N>>X;
    for(int i=0;i<N;i++)
    {
        scanf("%d ",&x[i]);
    }
    D=_abs(x[0]-X);
    for(int j=0;j<N;j++)
    {
        if(D>_abs(x[j]-X))
        {
            D=_abs(x[j]-X);
        }
        if(_abs(x[j]-X) % D!=0)
        {
            D=gcd_euclid(D,_abs(x[j]-X));
        }

    }
    std::cout<<D<<std::endl;
    return 0;
}