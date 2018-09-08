#include<iostream>

int main()
{
    int A,B,C;
    std::cin>>A>>B;
    std::string res;
    
    if(A==2 || B==2)
    {
        res="No";
    }
    else
    {
        res="Yes";
    }
    std::cout<<res.c_str()<<std::endl;
    return 0;
}