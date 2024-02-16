#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void ct()
{
    
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int number[]  = {10, 20, 30};
    int adu = accumulate(number, number + 3, 2);
    cout<<adu<<endl;
}