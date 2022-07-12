#include<iostream>
int main()
{
    int i,p,r,n;
    std::cout<<" Enter principal of Amount : "<<std::endl;
    std::cin>>p;
    
    std::cout<<"Enter rate of Interst : "<<std::endl;
    std::cin>>r;
    
    std::cout<<"Enter time of Interst : "<<std::endl;
    std::cin>>n;

    i=(p*r*n)/100;

    std::cout<<"simpal intrest :"<<i;
}