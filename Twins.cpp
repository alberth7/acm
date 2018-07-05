	#include <bits/stdc++.h>
		using namespace std;
		 void mostrar(int v[],int n){
		 	for (int i = 0; i < n; ++i)
		 	{
		 		cout<<(v[i]);
		 	}
		 	cout<<endl;
		 }

		 int sumar(int v[],int n){
		 	int s=0;
		 	for (int i = 0; i <n; ++i)
		 	{
		 		s=s+v[i];
		 	}

		 	return s;
		 }
		int main (){
			int n,x,suma=0,suma2=0;
			cin>>n;
			int v[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>x;
				v[i]=x;
			}
			//mostrar(v,n);
			sort(v,v+n);
			int stMenor=sumar(v,n);
			int stMayor=0;
			int cm=1;
			
			for (int i = n-1; i >= 0; i--)
			{
				stMayor=stMayor+v[i];
				stMenor=stMenor-v[i];
			
				if(stMayor<=stMenor){
					cm++;
				}
			}
			cout<<(cm)<<endl;
			

		 return 0;
		 
		
		}
