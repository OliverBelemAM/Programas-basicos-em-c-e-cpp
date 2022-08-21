#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string nome1, nome2;
	int idade1, idade2;
	double media;
	
		cout <<"Dados da Primeira pessoa: " << endl;
	cout << "Nome: "; 
	 getline (cin, nome1);
	cout << "Idade: ";
	 cin >> idade1;
	 
		cout <<"Dados da Segunda pessoa: " << endl;
	cout << "Nome: ";
	 cin.ignore(INT_MAX, '\n');	// ------ Limpeza de Buffer.
	 getline (cin, nome2);
	cout << "Idade: ";
	 cin >> idade2;	
	
		media = (idade1 + idade2) / 2;
	
	cout << "A idade media de " << nome1 << " e " << nome2 << " e de: " << media;
	
	return 0;
}
