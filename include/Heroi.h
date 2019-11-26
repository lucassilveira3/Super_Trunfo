#ifndef Heroi_H
#define Heroi_H

#include <iostream>
#include "Cartas.h"

class Heroi: public Cartas {
private:
	int velocidade;
	int inteligencia;
	int agilidade;
	int forca;
	int habilidade;
	bool super_trunfo;

public:
	//GETS
	int get_velocidade();
	int get_inteligencia();
	int get_agilidade();
	int get_forca();
	int get_habilidade();
	bool get_super_trunfo();

	void imprime_carta() override;

	//SETS
	void set_velocidade(int velocidade);
	void set_inteligencia(int inteligencia);
	void set_agilidade(int agilidade);
	void set_forca(int forca);
	void set_habilidade(int habilidade);
	void set_super_trunfo(bool super_trunfo);
	
};

#endif
