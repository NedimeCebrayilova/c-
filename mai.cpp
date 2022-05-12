#include <iostream>
using namespace std;
int main(){
	char cumle[100];
	cout<<"cumle yazin:";
	gets(cumle);
	for(int i=0; cumle[i]!='\0'; i++){
		cout<<cumle[i];
		if(cumle[i] == ' '){
			cout<<endl;
		}
	}
	
}

