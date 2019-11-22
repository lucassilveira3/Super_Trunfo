#include "Aviao.h"
#include <iostream>
#include <string>

int Aviao::get_peso(){
	return peso;
}

int Aviao::get_velocidade(){
	return velocidade;
}

int Aviao::get_altitude_voo(){
	return altitude_voo;
}

float Aviao::get_comprimento(){
	return comprimento;
}

float Aviao::get_altura(){
	return altura;
}

void Aviao::imprime_carta (){
	std::cout << "##########CARTA##########" << std::endl;
	std::cout << "# Nome: " << get_nome() << std::endl;
	std::cout << "# Tipo: " << get_tipo() << std::endl << std::endl;
	std::cout << "# 1 Peso: " << get_peso() << std::endl; 
	std::cout << "# 2 Velocidade: " << get_velocidade() << std::endl; 
	std::cout << "# 3 Altitude Voo: " << get_altitude_voo() << std::endl; 
	std::cout << "# 4 Comprimento: " << get_comprimento() << std::endl; 
	std::cout << "# 5 Altura: " << get_altura() << std::endl; 
	std::cout << "#########################" << std::endl << std::endl;
}

void Aviao::set_peso(int peso){
	this-> peso = peso;
}

void Aviao::set_velocidade(int velocidade){
	this-> velocidade = velocidade;
}

void Aviao::set_altitude_voo(int altitude_voo){
	this-> altitude_voo = altitude_voo;
}

void Aviao::set_comprimento(float comprimento){
	this-> comprimento = comprimento;
}

void Aviao::set_altura(float altura){
	this-> altura = altura;
}
