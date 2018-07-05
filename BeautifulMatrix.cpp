#include <bits/stdc++.h>
	using namespace std;
	 
void mostrar(int m[5][5]){
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout<<m[i][j];
		}
		cout<<endl;
	}
}

int main (){

int c[5][5];
int n;
int pi,pj,p=0;

for (int i = 0; i < 5; ++i)
{
	for (int j = 0; j < 5; ++j)

	{
		cin>>n;
		c[i][j]=n;
		if(n==1){
			pi=i;
			pj=j;
		}
	}
}
//cout<<pi<<pj<<endl;

while(pj!=2 || pi!=2){
if(pi>2){
	pi--;
	p++;
}
if(pi<2){
	pi++;
	p++;
}
if(pj>2){
	pj--;
	p++;
}
if(pj<2){
	pj++;
	p++;
}

}

//mostrar(c);
cout<<p<<endl;

	 
	 return 0;
	 
	
	}
