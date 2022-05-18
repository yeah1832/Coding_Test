#include <iostream>
using namespace std;

int main(){
	int age= 0;
	char jumin[20];
	string sex="";

	cin>>jumin;
	char generation = jumin[7];
	int year = (jumin[0] - 48) * 10 + (jumin[1] - 48 );
	switch(generation){
		case '1':
			age = 2019 - 1900 - year + 1;
			sex = "M";
			break;
		case '2':
			age = 2019 - 1900 - year + 1;
			sex = "W";
			break;
		case '3':
			age = 2019 - 2000 - year + 1;
			sex = "M";
			break;
		case '4':
			age = 2019 - 2000 - year + 1;
			sex = "W";
			break;
	}
	cout<<age<<" "<<sex;
	return 0;
}

