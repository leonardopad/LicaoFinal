#include<iostream>

 void quadrado( float lado){
		float area = lado * lado;
		float perimetro = lado * 4;
		
		std:: cout << "Figura geometrica quadrado \n";
		std:: cout << "area " << area << " \n";
		std:: cout << "Perimetro " << perimetro << " \n"; 	
 		
 }
 
  void retangulo( float base, float altura){
		float area = base * altura;
		float perimetro = (base + altura) * 2;
		
		std:: cout << "Figura geometrica retangulo \n";
		std:: cout << "area " << area << " \n";
		std:: cout << "Perimetro " << perimetro << " \n"; 	
 		
 }
 
 void triangulo( float base, float altura){
		float area = (base * altura) / 2;
		float perimetro = base + (altura * 2);
		
		std:: cout << "Figura geometrica triangulo \n";
		std:: cout << "area " << area << " \n";
		std:: cout << "Perimetro " << perimetro << " \n"; 	
 		
 }

 void circulo( float diametro){
 		float pi = 3.1415;
		float area = pi * (diametro / 2);
		float perimetro = (2 * pi) * (diametro / 2);
		
		std:: cout << "Figura geometrica Circulo \n";
		std:: cout << "area " << area << " \n";
		std:: cout << "Perimetro " << perimetro << " \n"; 	
 		
 }






int main(){
	quadrado(6.5);
	retangulo(8.5, 6.0);
	triangulo(7.1, 14);
	circulo(12);
}