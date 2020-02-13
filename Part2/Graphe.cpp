#include "Graphe.h"

Graphe::Graphe()
{
}

void Graphe::AddSommet(Sommet* sommet)
{
	lstSommet.push_back(*sommet);
}

void Graphe::findSommetByIndex(int index)
{
	cout << lstSommet[index].GetName();
}

vector<Sommet> Graphe::GetListSommet()
{
	return lstSommet;
}
