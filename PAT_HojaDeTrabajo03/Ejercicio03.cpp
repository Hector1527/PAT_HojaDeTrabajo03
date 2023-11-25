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
	copianodo[head] = result;

	Node<int>* original = head->next;
	Node<int>* copia = result;

	while (original)
	{

	}
}
