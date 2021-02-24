#include "Node.h"
#include <iostream>
#include <string>

int main()
{
	Node<int> noeud{ 5 };
	std::cout << noeud.getData() << "\n";
	Node<std::string> noeud2{ "test" };
	std::cout << noeud2.getData() << "\n";

	Node<Node<std::string>> conteneur{ noeud2 };

	std::cout << conteneur.getData().getData() << "\n";
}