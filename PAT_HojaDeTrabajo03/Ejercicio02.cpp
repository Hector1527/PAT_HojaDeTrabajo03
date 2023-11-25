#include "Ejercicio02.h"
#include <unordered_map>
using namespace std;

void SelectionSort(string& s, size_t tam)
{
	for (int i = 0; i < tam - 1; i++)
	{
		int index = i;

		for (int j = i; j < tam; j++)
		{
			if (s[j] < s[index])
				index = j;
		}

		char temp = s[i];
		s[i] = s[index];
		s[index] = temp;
	}

}

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
	unordered_map<string, vector<string>> anagramas;

	for (string s : strings)
	{
		string clave = s;
		size_t tam = s.length();
		SelectionSort(clave, tam);

		anagramas[clave].push_back(s);
	}
	auto* result = new vector<vector<string>>;

	for (const auto& c : anagramas)
	{
		result->push_back(c.second);
	}

	return result;
}
