#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long tinh(long long a, long long b, string c){
	if(c == string(1, '+'))	return a+b;
	if(c == string(1, '-'))	return a-b;
	if(c == string(1, '*'))	return a*b;
	if(c == string(1, '/'))	return a/b;
}
int check(vector<string> s){
	if(s[0] >= "0" && s[0] <= "9")	return 1;
	else{
		if(s[0].size() > 1)	return 1;
		else return 2;
	}
}
int main(){
    int t; cin >> t;
    while (t--)
    {
    	int n; cin >> n;
    	
    	vector<string> v;
    	for(int i=0; i<n; i++){
    		string x; cin >> x;
    		v.push_back(x);
		}
		if(check(v) == 1){

			stack<long long> st;
			for(int i=0; i<n; i++){
				
				if(v[i] != string(1, '+') && v[i] != string(1, '-') && v[i] != string(1, '*') && v[i] != string(1, '/')){
					stringstream ss(v[i]);
					ll num;
					ss >> num;
					st.push(num);      		
				}
				else{
					long long fi = st.top(); st.pop();
					long long se = st.top(); st.pop();
					long long tmp = tinh(fi, se, v[i]);
					st.push(tmp);
				}
			}
			cout << st.top() << endl;
		}
		if(check(v) == 2){

			stack<long long> st;
			for(int i=n-1; i>=0; i--){
				
				if(v[i] != string(1, '+') && v[i] != string(1, '-') && v[i] != string(1, '*') && v[i] != string(1, '/')){
					st.push(stoll(v[i]));      		
				}
				else{
					long long fi = st.top(); st.pop();
					long long se = st.top(); st.pop();
					long long tmp = tinh(se, fi, v[i]);
					st.push(tmp);
				}
			}
			cout << st.top() << endl;
    	}
	}
    return 0;
}
