#include <iostream>
#include <string>
using namespace std;
int main(){
	string ad;
	cout<<"ad daxil et:";
	getline (cin, ad);
	cout<<"adinizin tersi:";
	for (int i=ad.length()-1; i>=0; i--){
		cout<<ad[i];
	}
}
