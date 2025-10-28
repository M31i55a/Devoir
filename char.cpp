#include <iostream>
using namespace std;

// Fonction qui concatène deux chaînes à l'aide des pointeurs
void concatenerChaines(char *destination, const char *source) {
    // Avancer jusqu'à la fin de la chaîne destination
    while (*destination != '\0') {
        destination++;
    }

    // Copier la source à la suite
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }

    // Terminer la chaîne finale
    *destination = '\0';
}

int main() {
    char source1[50];//taille maximum de la première source 
    char source2[50];// taille maximum de la deuxième source 
    char resultat[100]; // Chaîne de destination finale

   std::cout << "Entrez la première source : ";
   std::cin >> source1;

   std::cout << "Entrez la deuxième source : ";
   std::cin >> source2;

    // Initialiser resultat avec la première source
    resultat[0] = '\0';  // Vide au départ
    concatenerChaines(resultat, source1);//elle met la première source dans le résultat 
    concatenerChaines(resultat, source2);

    cout << "\nRésultat de la concaténation : " << resultat << "\n";

    return 0;
}



// **************************************************"""""
//             reccurence de caractère 


 char* reccurencecaractere(const char *chaine, char caractère, *position)
  {
   while (*position!='\0')
   {
    if(position=caractère recherché){
   char* position = TrouverCaractere(message, 'caractère');
    std::cout << " le Caractère " caractère " trouvé à la position"": " << (position - message) << "\n";
    } else {
        std::cout << " Caractère n'est pas trouvé" << "\n";
    }
    int main(){
        cout << "Entrez une chaîne de caractères : ";
    }