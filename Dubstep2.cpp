#include <bits/stdc++.h>
using namespace std;
int main (){
	
// dos for

string n;
 cin>>n;
 string cad="",cadn="";
 for (int i = 0; i < n.size(); ++i)
 	{
 	cad=cad+n[i];
 	if(cad=="WUB"){
 		cad="";
 	}else{
 		cadn=cadn+cad;
 	}

 	}
 	cout<<cadn<<endl;		 
			
return 0;

}

