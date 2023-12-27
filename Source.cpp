#include<iostream>
using namespace std;
void dis(int& m, int& km) {
	km = 1000 * km;
	if (km > m) {
		cout <<"larger distance is=" <<km/1000<<endl;
	}
	else if (km < m) {
		cout << "largest distance is=" <<m<< endl;
	}

} 
int main() {
	int km, m;
	cout << "ENTER THE DISTANCE IN KM=";
	cin >> km;
	cout << "ENTER THE DISTANCE IN METER=";
	cin >> m;
	dis(m, km);

}