#include<iostream>
#include <sstream> 

using namespace std;

int ile(float x){
	int ret=0;
	ostringstream pp;
	pp << x;
	string s1 = pp.str();
	for(int i=0;i<s1.length()-1;++i){
		ret = i;
		if(s1[i] == '.'){
			return ret;
		}
	}
	return ret;
}

precyzja_n(){
	float x, y, n, suma, roznica, iloraz, iloczyn;
	cout << "Podaj liczb�: " << "\n";
	cin >> x;
	cout << "Podaj drug� liczb�: " << "\n";
	cin >> y;
	cout << "Ile cyfr po przecinku? " << "\n";
	cin >> n;
	suma = x + y;
	roznica = x - y;
	iloczyn = x * y;
	iloraz = x / y;
	cout.precision( ile(suma)+n );
	cout << "Suma podanych liczb to " << suma << "." << "\n";
	cout.precision( ile(roznica)+n );
	cout << "R�nica podanych liczb to " << roznica << "." << "\n";
	cout.precision( ile(iloraz)+n );
	cout << "Iloraz podanych liczb to " << iloraz << "." << "\n";
	cout.precision( ile(iloczyn)+n );
	cout << "Iloczyn podanych liczb to " << iloczyn << "." << "\n";
}

main(){
	system("chcp 1250");
	system("CLS");

	precyzja_n();
}
