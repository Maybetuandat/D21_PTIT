#include<iostream>
int main ()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n, x; std::cin>>n;
		for(int i=0; i<n; i++)
		{
			for(int j=1; j<=n; j++)
			{
			    std::cin>>x;
				if(x == 1)
				   std::cout<<j<<" ";
			}
			std::cout<<std::endl;
		}
			
}
