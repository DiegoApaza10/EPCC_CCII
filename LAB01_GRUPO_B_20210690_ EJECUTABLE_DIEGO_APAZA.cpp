#include <iostream>
#include <fstream>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;


//ALUMNO: APAZA ANDALUZ DIEGO FRANCISCO
//CUI: 20210690
//EJERCICIO 1
/*Escriba un código que solicite al usuario ingresar dos números enteros y que muestre
el producto de ambos*/

int main(){
	/*
	int a,b,c;
	cout<<"Ingrese el primer numero \n";cin>>a;
	cout<<"Ingrese el segundo numero \n";cin>>b;
	c=a*b;
	cout<<"El producto es: \n\n"<<c<<"\n";
	*/
	//////////////////////////////////
	
//EJERCICIO 2
/*
Escriba un código que solicite el primer nombre de una persona, el apellido paterno
y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la
primera letra del nombre, el apellido paterno completo, y la primera letra del apellido
materno. (se agrega el dominio de la universidad al final).*/

/*
	char nombre[10];
	char apellido[10];
	char apellido2[10];
	
	string palabra=" ";
    int i=0;
    char car=' ';
    while(car!='0'){
        cout<<"ingrese caracter "<<endl;
        cin >> car;
        palabra[i] = car;
        i++;
    }
    cout<<"palabra "<<endl;
    for(int i=0;i<palabra.length();i++){
        cout<< palabra[i]<<endl;
    }*/

//EJERCIO3

/////
//ejercicio 5
/*
Elabore un código que reciba como entrada una secuencia de caracteres que contiene
un numero flotante y retorne el número redondeado*/
/*	float numero;
	int a;
	cout<<"Escriba el numero a redondear \n";cin>>numero;
	a=round(numero);
	cout<<" El numero redondeado es: "<<a;
*/
//EJERCICIO 6
	/*Elabore un código que solicite un numero entre 100 < x < 999 y muestre el resultado
	en binario.*/
	/*

	int numero;
	srand(time (0));
	numero=100+(rand()%999);
	cout<<" NUMERO ALEATORIO: ";
	cout<<numero<<"\n";
	
	string r;
	
   	while (numero != 0){
        r += ( numero % 2 == 0 ? "0" : "1" );
        numero /= 2;
   	}
	cout<<" VALOR EN BINARIO: ";
	cout<<r;
	
*/


//EJERCICIO 7
/*Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.*/
/*
	int num1,num2,a;
	cout<<"Ingrese un numero: ";cin>>num1;
	cout<<"Ingrese un numero: ";cin>>num2;
	
	if(num1 % num2==0){
		cout<<num2<<" Es divisor de "<<num1<<" \n ";
	}
	else if(num2%num1==0){
		cout<<num1<<" Es divisor de "<<num2<<" \n ";
	}
*/
//EJERCICIO 8
//Escribir un programa que calcule la media de x cantidad números introducidos por el
//teclado
/*
	int s,n,m,x,i=0;
	cout<<"ingresar cantidad de numeros:";
	cin>>n;
	
	while(i<n)
	{
		cout<<"ingresar numero:";
		cin>>x;
		s=s+x;
		m=s/n;
		i++;
	}
	cout<<" LA MEDIA ES: "<<m;
	*/
//EJERCICIO 9
//Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean
//negativos.

/*	int n,s=0,i=0,n1;
	cout<<"ingresar cantidad de numeros:";
	cin>>n;
	
	while(i<n)
	{
		cout<<"ingresar numero: \n";
		cin>>n1;
		if(n1<0){
			s=s+n1;
		}
		i++;
	}
	cout<<" \n EL RESULTADO ES: "<<s;
*/
//EJERCICIO 10

/*	Escribir un programa que almacene la cadena de caracteres contraseña en una
	variable, pregunte al usuario por la contraseña hasta que introduzca la contraseña
	correcta.*/

	string contrasena="123456789";
	string password=" ";
	while(password!= contrasena){
		cout<<" Ingrese contrasena \n";
		cin>>password;
		cout<<"\n";
	}
	cout<<"Contrasena correcta";


	
	
	
	return 0;
}




