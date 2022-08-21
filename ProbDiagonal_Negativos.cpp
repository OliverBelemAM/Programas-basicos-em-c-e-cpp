#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n, cont;
	
		cout << "Qual a ordem da Matriz? ";
			cin >> n;
	
	int mat[n][n];
	
		for (int i = 0; i < n; i++){
			for  (int j = 0; j < n; j++){
				cout << "Elemento [" << i <<"] [" << j << "]";
				 cin >> mat[i][j];
			}
		}
	
	cout << "\n DIAGONAL PRINCIPAL: \n";
	
		for (int i = 0; i < n; i++){
			cout << mat [i][i] << " ";
		}
	
	cont = 0;
	
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if( mat[i][j] < 0 ){
					cont++;	
				}
			}
		}
		
		cout << "\n QUANTIDADE DE NEGATIVOS: " << cont << endl;
	
	return 0; 
}
