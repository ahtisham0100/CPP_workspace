#include <iostream>
#include <string>
using namespace std;

int main() {
    int vowela, vowele, vowelo, voweli, vowelu, consonant;
    vowela = vowele = vowelo = voweli = vowelu = consonant = 0;

    string a;
    cout << "Enter a string: ";
    getline(cin, a);         // Read the entire line including spaces

    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == 'a' || a[i] == 'A') {
            vowela++;
        } else if (a[i] == 'e' || a[i] == 'E') {
            vowele++;
        } else if (a[i] == 'i' || a[i] == 'I') {
            voweli++;
        } else if (a[i] == 'o' || a[i] == 'O') {
            vowelo++;
        } else if (a[i] == 'u' || a[i] == 'U') {
            vowelu++;
        } else if(isalpha(a[i]))   {  // Check if the character is a consonant
            consonant++;
        }
    }

    cout << "VOWEL 'a' appears " << vowela << " times." << endl;
    cout << "VOWEL 'e' appears " << vowele << " times." << endl;
    cout << "VOWEL 'i' appears " << voweli << " times." << endl;
    cout << "VOWEL 'o' appears " << vowelo << " times." << endl;
    cout << "VOWEL 'u' appears " << vowelu << " times." << endl;
    cout << endl << "There are " << consonant << " consonants." << endl;

    system("pause");
    return 0;
}
