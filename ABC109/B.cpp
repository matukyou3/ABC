#include<iostream>
#include<string>
int main()
{
    int N;
    std::string a[100];
    std::cin>>N;
    std::string res="Yes";
    for(int i=0;i<N;i++)
    {
        std::cin>>a[i];
    }
    for(int j=1;j<N;j++)
    {
        if(a[j-1].back()!=a[j].front())
        {
            res="No";
            std::cout<<res<<std::endl;
            return 0;
        }
        for(int k=0;k<j;k++)
        {
            if(a[k]==a[j])
            {
                res="No";
                std::cout<<res<<std::endl;
                return 0;
            }
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}