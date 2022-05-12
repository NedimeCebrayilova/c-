#include <iostream>
using namespace std;
struct ishchiler{
	int no;
	char ad [24];
	char ishleme_tipi [6];
	union {
		double maash;
		int saat;
	}melumat;
}ishchiler[100];
int main(){
	int n;
	string mystring;
	for(n=1; n<=100;n++){
		cout<<"ad:"; getline(cin, mystring);
			cout<<"isleme_tipi:"; getline(cin, mystring);
				cout<<"saat:"; getline(cin, mystring);
					cout<<"maash:"; getline(cin, mystring);
}
}
