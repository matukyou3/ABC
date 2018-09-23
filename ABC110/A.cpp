#include<iostream>

int main()
{
    int A,B,C;
    int res;
    std::cin>>A>>B>>C;

    if(A>=B && A>=C)
        res = 10*A+B+C;
    else if(B>=C)
        res = 10*B +A +C;
    else
        res = 10*C+A+B;
    std :: cout << res <<std:: endl;
    return 0;

}