#include "No.h"

class Fila{
	private:
		No* frente;
		No* fundo;
	public:
		Fila();
		
		void enqueue(int d);
		void dequeue();
		void exibirElemento();		
};
