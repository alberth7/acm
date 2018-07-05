#include <bits/stdc++.h>
using namespace std;
	 
int main (){
string n;
string cad="",cadn="";
cin>>n;
int i=0;
while(i<n.length()){
	if(n[i]=='W'){
		cad=n[i];
		i++;
		if(n[i]=='U'){
			cad=cad+n[i];
			i++;
			if(n[i]=='B')
			{
				if(cadn!="" ) {

				if(cadn[cadn.size()-1]!=' '){
					cadn=cadn+" ";	
				 }	
				}

					
				i++;
			}else{
				cadn=cadn+cad;
				
			}

		}else{
			cadn=cadn+cad;
		}
	}else{
		cadn=cadn+n[i];
		i++;
	}
	cad="";
}


cout<<cadn<<endl;
//cout<<cadn.size()<<endl;

	 return 0;
	
	}
	
	
