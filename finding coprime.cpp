#include <iostream>
using namespace std;

int main () {
	
	int p = 5, q = 7;
	int num = p*q, n1 = 1, count = 0, n[50];
	int fact[50], factor[50][50];
	int coprime[50], Ncp =1;
	
	// get 2 prime number
	cout << "insert value of prime number" << endl;
	cout << "p = ";
	cin >> p;
	cout << "q = ";
	cin >> q;
	
	num = p*q;
	
	cout << "factor of " << num << endl;
	
	// finding factor for num
	for (int i=1; i<=num; i++){
		if (num%i == 0){
			fact[n1++] = i;
		}
	}
	
	for (int i=1; i<n1 ; i++){
			cout << fact[i] << " ";
	}
	
	//finding factor for all nums
	cout << endl << endl << "Factor of each number less than " << num;
	for (int i=1; i<=num; i++){
		cout << endl << i << " = ";
		n[i] = 1;
		for (int j=1; j<=i; j++){
			if (i%j == 0){
				factor[i][n[i]] = j;
				cout << factor[i][n[i]] <<  " ";
				n[i]++;
			}
		}
	}
	
	// print all nums factor
	/*cout << endl << endl;
	for (int i=1; i<=num; i++){
		cout << endl << i << " = ";
		for (int j=1; j<n[i]; j++){
			cout << factor[i][j] <<  " ";
		}
	}*/
	
	// find coprime
	cout << endl << endl << "coprime of " << num << endl;
	for (int i=1; i<=num; i++){
		count = 0;
		for (int j=1; j<n[i]; j++){
			for (int k=1; k<n1; k++){
				if (fact[k] == factor[i][n[j]])
					count++;
			}
		}
		if (count < 1){
			coprime[Ncp] = i;
			Ncp++;
			//cout << i << " ";
		}
	}
	
	// print coprime of num
	for (int i=1; i<Ncp; i++){
		cout << coprime[i] << "\t";
		if (i%10 == 0)
			cout << endl;
	}
	
	cout << endl << endl;
	cout << "(p - 1)(q - 1) = " << (p-1)*(q-1) << endl;
	cout << "no of coprime of " << num << " = " << Ncp-1;
	
}
