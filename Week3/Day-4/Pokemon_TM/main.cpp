#include <iostream>
#include <vector>

#include "pokemon.h"


vector<Pokemon> initializePokemons()
{
    vector<Pokemon> pokemons;

    pokemons.push_back(Pokemon("Balbasaur", "leaf", "water"));
    pokemons.push_back(Pokemon("Pikatchu", "electric", "water"));
    pokemons.push_back(Pokemon("Charizard", "fire", "leaf"));
    pokemons.push_back(Pokemon("Balbasaur", "water", "fire"));
    pokemons.push_back(Pokemon("Kingler", "water", "fire"));

    return pokemons;
}

int main(int argc, char* args[])
{
    vector<Pokemon> pokemonOfAsh = initializePokemons();
    Pokemon wildPokemon("Oddish", "leaf", "water");
    string nameA;
    for (Pokemon x : pokemonOfAsh){
        if (x.isEffectiveAgainst(wildPokemon)){
            nameA = x._name;
        }
    }


    // Every pokemon has a name and a type.
    // Certain types are effective against others, e.g. water is effective against fire.

    // Ash has a few pokemon.
    // A wild pokemon appeared!



    // Which pokemon should Ash use?

    cout << "I choose You, " << nameA << endl;
    return 0;
}