#include "Exercise_10.h"

using namespace std;

EX10::Exercise10::Exercise10()
{
}

EX10::Exercise10::~Exercise10()
{
}

void ex1_add_player(const EX10::Exercise10::Player player_)
{

  cout << "name:" << player_.name << endl;
  cout << "heal points:" << player_.hp << endl << endl;

}

void ex1_add_weapon(const EX10::Exercise10::Weapon weapon_)
{

  cout << "name:" << weapon_.name << endl;
  cout << "damage:" << weapon_.dmg << endl << endl;

}

void ex1_add_hp_calculator(EX10::Exercise10::Player &player_, EX10::Exercise10::Weapon weapon_)
{

  player_.hp -= weapon_.dmg;

}

void EX10::Exercise10::ex1()
{

  //PROG  CREATE STRUCT CALLED PIRATE THAT HAS:
  //        CONST CHAR* NAME
  //        UNSIGNED INT HP
  //      CREATE STRUCT CALLED WEAPON THAT HAS:
  //        CONST CHAR* NAME
  //        UNSIGNED INT DMG
  //      CREATE VOID FUNCTION WITH CONST PIRATE AS PARAMETER AND THE SAME FUNCTION BUT WITH WEAPON
  //      CREATE VARIABLE TYPE PIRATE NAMED SOLARIE AND INITIALIZE ITS ATTRIBUTES, THEN CREATE VARIABLE TYPE WEAPON NAMED SWORD AND INITIALIZE ITS ATTRIBUTES
  //      CALL PREVIOUS FUNCTIONS AND DISPLAY ON SCREEN THE INFO OF SOLARIE AND THE SWORD
  //      CREATE A FUNCTION THAT RES THE DMG OF THE SWORD TO THE HP OF SOLARIE, WITH THIS VARIABLES AS PARAMETERS (&)
  //      DISPLAY ON SCREEN AGAIN THE INFO OF BOTH VARIABLES SOLARIE AND SWORD

  Player solarie = {
    
    "Solaire of Astora",
    100

  };

  Weapon sword = {
  
    "zweihander",
    75

  };

  ex1_add_player(solarie);
  ex1_add_weapon(sword);
  ex1_add_hp_calculator(solarie, sword);
  ex1_add_player(solarie);

}

void EX10::Exercise10::ex2()
{
}

void EX10::Exercise10::ex3()
{
}
