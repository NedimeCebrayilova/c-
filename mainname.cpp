#include <iostream>
using namespace std;
int x;//qlobal deyishen
int y;//local deyishen
int toplamaFonk(){
	y=12;
	cout<<y;	
}
int main(){
	x=11;
	cout<<x;
	toplamaFonk();
	return 0;
}

/*#include<iostream>
using namespace std;
namespace ns1{
	int x=4;
}
namespace ns2{
	double x=5.5;
}
int main(){
 cout<<ns1::x<<endl;
 cout<<ns2::x<<endl;
 return 0;
}*/

/*using namespace std;
namespace ns1{
	int x=4;
}
namespace ns2{
	double x=5.5;
}
int main(){
	using ns1::x;
	cout<<x<<endl;
	cout<<ns2::x;
	return 0; 
}*/

/*#include<iostream>
using namespace std;
namespace ns1{
	int x=4;
}
namespace ns2{
	double x=5.5;
}
int main(){
	using namespace ns1;
	cout<<x<<endl;
	cout<<ns2::x;
	return 0;
}*/


