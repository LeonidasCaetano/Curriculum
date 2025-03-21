#include <iostream>

int main () {

	std::cout 	<< "Bem vindo ao curriculum"<<std::endl;
	std::cout 	<< "O que gostaria de fazer?"<<std::endl
			<< "1 - Visualizar informações profissionais"<<std::endl
			<< "2 - Adicionar classe ao curriculo"<<std::endl
			<< "3 - Remover classe do curriculo"<< std::endl
			<< "4 - Adicionar informações"<< std::endl
			<< "5 - Remover informações"<< std::endl;//terminar	

	try {
	int option = 8; if (!(std::cin>>option)) throw 1;
	}
	catch (int ErR) {
		std::cout << "Erro "<< ErR<<" : ";
		switch (ErR) {
			case 1:
				std::cout<<"Insira um número válido!"<<std::endl;
				break;
			default:
				std::cout<<"Erro!";
		}
		return e;
	}

	
	return 0

}