#include<iostream>
using namespace std;
 int main(){
 	int quantosAlunos = 0;
 		cout << "Informe quantos alunos sera feita a media";
		cin >> quantosAlunos;
	string vetorNome[quantosAlunos];
 	float vetornotas1[quantosAlunos];
 	float vetornotas2[quantosAlunos];
 	int med = 0;
 	
 	for (int i = 0; i < quantosAlunos; i++ ){
 		cout << "informe o nome do " << i + 1 << " aluno: \n";
 		cin >> vetorNome[i];
 		cout << "informe a nota1 do aluno " << vetorNome[i] << " referente ao primeiro bimestre: \n";
 		cin >> vetornotas1[i];
 		cout << "informe a nota do aluno " << vetorNome[i] << " referente ao segundo bimestre: \n";
 		cin >> vetornotas2[i];
	 }
	 
	 for(int i = 0; i < quantosAlunos; i++ ){
	 	float media = ( vetornotas1[i] + vetornotas2[i] / 2 );
	 	
	 	if(media >= 6 ){
	 		cout << "Aluno " << vetorNome[i] << " teve media" << media << " e esta aprovado.";
		 }else {
		 	cout << "Aluno " << vetorNome[i] << " teve media" << media << " e esta reprovado.";
		 }
	 }	 
 }