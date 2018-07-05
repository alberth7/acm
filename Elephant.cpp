#include <bits/stdc++.h>
	using namespace std;
int main (){
int n,p=0;
cin>>n;
if(n%5==0){
	p=n/5;
}else{
	p=n/5 +1;
}
cout<<p<<endl;
return 0;
}
