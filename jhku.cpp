#include <iostream>
using namespace std;
int main(){
	string telebe;
	cout<<"Zehmet olmasa IT-20 qrupunnan bir oglanin adini daxil edin:";
	cin>>telebe;
	if(telebe=="Ilyas"){
	cout<<"Ilyas Muradov, mesuliyyetli,sakit,telebedir.";}
	else if(telebe=="Ibish"){
	cout<<"Ibish Huseynov,tehlukeli,telebedir.";}
	else if(telebe=="Nurlan"){
	cout<<"Nurlan Resulov, tenbel,ingilizcani soken telebedir.";}
	else if (telebe=="Yusif"){
	cout<<"error";}
	return 0;
}
