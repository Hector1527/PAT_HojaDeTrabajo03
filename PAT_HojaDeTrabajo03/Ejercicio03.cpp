#include "Ejercicio03.h"
#include <unordered_map>
using namespace std;

Node<int>* Ejercicio03::copyList(Node<int>* head)
{
	if (!head)
		return nullptr;

	unordered_map<Node<int>*, Node<int>*> copianodo;

	Node<int>* result = new Node<int>;
	result->value = head->value;
	result->next = nullptr;
	result->random = nullptr;
	copianodo[head] = result;

	Node<int>* original = head->next;
	Node<int>* copia = result;

	while (original!= nullptr)
	{
		copia->next = new Node<int>;
		copia->next->value = original->value;
		copianodo[original] = copia->next;
		copia->next->next = nullptr;

		original = original->next;
		copia = copia->next;
	}

	original = head;
	copia = result;

	while (original!= nullptr)
	{
		if (original->random)
			copia->random = copianodo[original->random];

		original = original->next;
		copia = copia->next;
	}
	return result;
}
