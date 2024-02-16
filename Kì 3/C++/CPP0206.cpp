#include<bits/stdc++.h>
int main ()
{
    int t,n,i,x;
    std::cin >>t;
    while (t--)
    {
        int max=INT_MIN;
        std:: cin>>n;
        for(i=0; i<n; i++)
        {
            std::cin >>x;
            if( x >max)
              max=x;
        }
        std::cout<<max<<"\n";
    }

}