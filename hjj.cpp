#include<iostream>
using namespace std;
int main(){
	int IQ1=100;
	int IQ2=50;
	int IQ3=0;
	string kapasite1="Ilerizekali";
	string kapasite2="Ortazekali";
	string kapasite3="Gerizekali";
    string huy1="enerjik,neseli, zarafatcil";
    string huy2="hessas,çitkirildim,pozitiv";
    string huy3="tatli,eylenceli,google";
	int dovr=1,itgirl ;
cout<<"Birini seçin zehmet olmasa)";
while(dovr!=0){
cout<<"\nItgirl:";
cout<<"\n1-Sema\n2-Turkan\n3-Reqsane";
cout<<"\nBirini seçin:";
cin>>itgirl;
if(itgirl==1){
cout<<"IQ:"<<IQ1<<endl;
cout<<"kapasite:"<<kapasite1<<endl;
cout<<"xarakter:"<<huy1<<endl;}
else if (itgirl==2){
cout<<"IQ:"<<IQ2<<endl;
cout<<"kapasite:"<<kapasite2<<endl;
cout<<"xarakter:"<<huy2<<endl;}
 else if (itgirl==3){
cout<<"IQ:"<<IQ3<<endl;
cout<<"kapasite:"<<kapasite3<<endl;
cout<<"xarakter:"<<huy3<<endl;}
else { cout<<"netice yoxdur.";}
cout<<"seçim etmek isterdinizmi?(1-he;0-yox"<<endl;
cin>>dovr;
}
return 0;}
