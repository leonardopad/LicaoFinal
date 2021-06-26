#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int num[50];
	srand(time(NULL));
	
	
	
	for(int con = 0; con < 50; con++){
		num[con] = rand() % 100;
		}
	for(int con = 0; con < 50; con++){
		int	posAnt = 1;
		if(con > 0){
			 int posAnt = num[con - 1];
		}
		cout << "posicao " << con << " num sorteado " << num[con] << " Valor calculado: " << num[con] * posAnt << " \n";
	}
		
	}
	
	

