#include <iostream>
#include "Graphe.h"
#include <queue>

using namespace std;

void ParcoursLargeur(Graphe* G, Sommet* S){
	queue<Sommet*> file;
	file.push(S);
	S->SetMarquer();
	while (!file.empty())
	{
		S = file.front();
		cout << "suppression de : " << S->GetName() << endl;
		file.pop();
		cout << S->GetName() << endl;
		for (Sommet* v : S->GetVoisins()) {
			if (v->GetMarquer() == false)
			{
				file.push(v);
				cout << "ajout de : " << v->GetName() << endl;
				v->SetMarquer();
			}
		}
	}
}

void ParcoursProfondeur(Graphe* G, Sommet* S) {
	S->SetMarquer();
	cout << S->GetName() << endl;
	for (Sommet* v : S->GetVoisins()) {
		if (v->GetMarquer() == false) {
			ParcoursProfondeur(G, v);
		}
	}
}

int main()
{
	int ID = 1;
	Graphe* G = new Graphe();
	Sommet* S1 = new Sommet("A", ID); ID++;
	Sommet* S2 = new Sommet("B", ID); ID++;
	Sommet* S3 = new Sommet("C", ID); ID++;
	Sommet* S4 = new Sommet("D", ID); ID++;
	Sommet* S5 = new Sommet("E", ID); ID++;
	Sommet* S6 = new Sommet("F", ID); ID++;
	Sommet* S7 = new Sommet("G", ID); ID++;

	S1->AddVoisin(S2);
	S1->AddVoisin(S4);

	S2->AddVoisin(S1);
	S2->AddVoisin(S3);
	S2->AddVoisin(S7);

	S3->AddVoisin(S2);
	S3->AddVoisin(S4);
	S3->AddVoisin(S5);
	S3->AddVoisin(S6);

	S4->AddVoisin(S3);
	S4->AddVoisin(S1);

	S5->AddVoisin(S3);

	S6->AddVoisin(S3);

	S7->AddVoisin(S2);

	G->AddSommet(S1);
	G->AddSommet(S2);
	G->AddSommet(S3);
	G->AddSommet(S4);
	G->AddSommet(S5);
	G->AddSommet(S6);
	G->AddSommet(S7);

	vector<Sommet> lst = G->GetListSommet();

	for (Sommet s : lst) {
		s.ShowVoisins();
	}

	ParcoursLargeur(G, S1);
}