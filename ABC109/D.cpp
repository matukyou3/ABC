#include<iostream>

int main()
{
    int H,W;
    int a[1000][1000];
    std::cin>>H>>W;
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            std::cin>>a[i][j];
        }
    }
}