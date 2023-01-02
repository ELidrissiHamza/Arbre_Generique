#include"Arbre.cpp"
#include"ArbreFibonacci.h";
void fct_test_arbre();
int main()
{
    fct_test_arbre();


    return 0;

}


void fct_test_arbre()
{
    cout<<"***************Voici le test d'execution de l'arbre generique*******************\n";
    ///declaration et instanciation de l'arbre
    Arbre <int> *arbre =new Arbre<int>();
    arbre->inserer(40);
    arbre->inserer(50);
    arbre->inserer(14);
    arbre->inserer(16);
    arbre->inserer(5);
    arbre->inserer(3);
    arbre->inserer(7);
    arbre->inserer(55);
    arbre->inserer(45);
    cout << '\n';
    cout << "Le parcours infixe de cet arbre est : "<< endl;
    arbre->infixe();
    cout << '\n';
    cout << '\n';
    cout << "Le parcours postfixe de cet arbre est : "<< endl;
    arbre->postfixe();
    cout << '\n';
    cout << '\n';
    cout << "Le parcours prefixe de cet arbre est : "<< endl;
    arbre->prefixe();
    cout << '\n';
    cout<<"Affichage horizontale de l'arbre :"<<endl;
    arbre->Aff_Arbre_horiz();
    cout<<endl<<endl;

    ///le test de rechrche
    cout<<"Dans ce test on va chercher la valeur 3 qui existe dans notre arbre\n";
    if(arbre->recherche(3) != 0){
        cout << "Le noeud avec la cle 3 appartient a l'arbre" << endl;
    }
    else{
        cout << "Le noeud avec la cle 3 n'appartient pas a l'arbre" << endl;
    }

    ///la valeur maximale de l'arbre
    cout<<"La valeur maximale de l'arbre est : "<<arbre->max_arbre()<<endl;

    ///le nombre d'occurence d'un nombre

    cout<<"Le nombre d'occurence de la valeur 3 est : "<<arbre->occurecene_arbre(3)<<endl;


    ///maintenant le test de suppression
    cout<<"Maintenant on va tester la suppression  supprimons la valeur 3\n\n\n";
    arbre->supprimer(3);
    arbre->Aff_Arbre_horiz();
    cout<<"\n\nMaintenant on va tester la suppression  supprimons la valeur 50\n\n\n";
    arbre->supprimer(50);
    arbre->Aff_Arbre_horiz();
}


