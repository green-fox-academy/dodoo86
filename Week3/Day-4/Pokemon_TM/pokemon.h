

#ifndef POKEMON_TM_POKEMON_H
#define POKEMON_TM_POKEMON_H
#include <iostream>

using namespace std;

class Pokemon {
public:
    Pokemon(const string& name, const string& type, const string& effectiveAgainst);
    bool isEffectiveAgainst(Pokemon anotherPokemon);

    string _name;
    string _type;
    string _effectiveAgainst;
};



#endif //POKEMON_TM_POKEMON_H
