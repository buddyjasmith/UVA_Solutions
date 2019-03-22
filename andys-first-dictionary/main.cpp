//Buddy Smith
//Programming Techniques
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <regex>

using namespace std;

#define endl '\n'

int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    set<string> dictionary;

    string line, aux = "";

    while(cin >> line) {

        for (int i = 0; i < line.length(); i++) {
            (!isalpha(line[i])) ? dictionary.insert(aux),aux="" : aux += tolower(line[i]); 
            
        }


        if (aux != "") {
            dictionary.insert(aux);
            aux = "";
        }
    }

    for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
        cout << *it << '\n';

    }


    return 0;

}
