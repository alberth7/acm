#include <bits/stdc++.h>
    using namespace std;
int main (){

int n,x,a=0,b=0,pp=0,pi=0;
cin >> n;
for (int i = 0; i < n; ++i)
    {       
     cin>>x;
    if(x%2==0){
        a++;
        pp=i+1;
    }else{
        b++;
        pi=i+1;
    }
    }
if(a>b){
cout<<pi<<endl;
}else{
cout<<pp<<endl;    
}   
return 0;

}