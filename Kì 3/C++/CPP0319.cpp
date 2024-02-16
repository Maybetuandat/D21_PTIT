#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, s;
	cin >> n >> s;
	if(9 * n < s || (s == 0 && n > 1))
	{
		cout << "-1 -1";
		return 0;
	}
	
	int tmp = s - 1;
	int max[100]={0}, min[100]={0};
	cout <<tmp<<endl;
	for(int i=0; i< n; i++)
	{
		if(s > 9)
		{
			max[i] = 9;
			s = s - 9;
		}
		else if(s != 0)
		{
			max[i] = s;
			s = 0;
		}
		else break;
	}
	
	for(int i = n-1; i>0; i--)
	{
		if(tmp > 9)
		{
			min[i] = 9;
			tmp = tmp - 9;
		}
		
		else 
		{
		
		   if(tmp != 0)
		   {
		    	min[i] = tmp;
				cout <<tmp<<endl;	
			    tmp = 0;
		
		   }
		   else 
		     break;
	    }
	}
//	cout<<tmp<<endl;
	min[0] = tmp + 1;
	
	for(int i=0; i< n; i++)
	{
		cout << min[i];
	}
	
	cout << " ";
	
	
	for(int i=0; i< n; i++)
	{
		cout << max[i];
	}
	
	
	
	
	return 0;
}