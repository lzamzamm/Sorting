#include<iostream>
using namespace std;

int main(){
	int i, n, j;
	cout << "? : ";
	cin >> n;
	getchar();
	
	string a[n], temp;
	for (i = 0; i < n; i++) {
		getline(cin, a[i]);
	}
	
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if(a[i] >= a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	cout << "hasil" <<endl;
	
	for (i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}
