#include "Fila.h"

#include <iostream>

using namespace std;

Fila::Fila(){
	frente = NULL;
	fundo = NULL;
}

void Fila::enqueue(int d)
{
	No* novoNo = new No(d);
	
	if(frente == NULL){
		frente = novoNo;
		fundo = novoNo;
		
		return;
	}
			
	fundo->proximo = novoNo;
	fundo = novoNo;
}

void Fila::dequeue()
{
	if(frente == NULL){
		cout << "Lista vazia" << endl;
		return;
	}
			
	No* remover;
	
	remover = frente;
	cout << remover->dado << " Removido" << endl;
	frente = frente->proximo;
	delete remover;
	
	if(frente == NULL){
		fundo = NULL;
	}
}


void Fila::exibirElemento()
{
	if(frente == NULL){
		cout << "Lista vazia" << endl;
		return;
	}
		
	No* temp = frente;
	
	cout << "frente->"; 
	while(temp != NULL){
		cout << temp->dado << "->";
		temp = temp->proximo;
	}
	cout << "fundo" << endl;
	
	cout << "Frente: " << frente->dado << endl;
	cout << "Fundo: " << fundo->dado << endl;
	 
}



