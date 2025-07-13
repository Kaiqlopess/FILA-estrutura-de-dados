#include "Fila.h"

#include <iostream>

int main(int argc, char** argv) {
	
	Fila f;
	
	f.enqueue(3);
	f.enqueue(4);
	f.enqueue(5);
	
	f.dequeue();
	
	f.exibirElemento();
	
	return 0;
}
