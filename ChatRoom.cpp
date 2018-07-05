#include <bits/stdc++.h>
    using namespace std;
int main (){

string s="";
int h,e,l1=0,l2=0,o,sw=0,sw1=0,sw2=0,sw3=0,sw4=0;
cin>>s;
for (int i = 0; i < s.size(); ++i)
{
    if(s[i]=='h'&& sw==0){
        h=i;
        sw=1;
    }
    if(s[i]=='e'&& sw==1){
        e=i;
        sw=2;
    }
    if(s[i]=='l'&& sw==2){
        l1=i;
        l2++;
        if(l2==2){
            sw=3;
        }            
    }

    if(s[i]=='o' && sw==3){
        o=i;
    }
}
if(h<e && e<l1 && l1<o  ){
//if(sw==5){
cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;        
}
   
return 0;

}