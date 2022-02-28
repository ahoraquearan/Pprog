#ifndef PLAYER_H
#define PLAYER_H

#include "types.h"

#define PLAYER_ID 1

typedef struct _Player Player;

/**
  * @brief It creates a new player
  * @author Juan Martinez
  *
  * player_create allocates memory for a new player
  *  and initializes its members
  * @param id the identification number for the new player
  * @return a new player, initialized
  */
Player* player_create(Id id);

/**
  * @brief It destroys a player
  * @author Alex Hernandez
  *
  * player_destroy frees the previous memory allocation 
  *  for a player
  * @param player a pointer to the player that must be destroyed  
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS player_destroy(Player* player);

/**
  * @brief It gets the id of the player
  * @author Alejandro Hernandez
  *
  * @param space a pointer to the space
  * @param player a pointer to the player
  * @return the id of the player or NO_ID if there was some mistake 
  */
Id player_get_id(Player* player);

/**
  * @brief It sets the id of a player
  * @author Alberto Gomez-Rodulfo
  * 
  * @param player a pointer to the player
  * @param name an Id  with the id to store
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS player_set_id(Player* player, Id id);

/**
  * @brief It sets the name of a player
  * @author Alberto Gomez-Rodulfo
  * 
  * @param player a pointer to the player
  * @param name a string with the name to store
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS player_set_name(Player* player, char* name);

/**
  * @brief It gets the name of a player
  * @author Juan Martinez
  * 
  * @param player a pointer to the player
  * @return  a string with the name of the player
  */
const char* player_get_name(Player* player);

/**
  * @brief It gets the location of a player
  * @author Alejandro Hernandez
  * 
  * @param player a pointer to the player
  * @return  an id with the location of the player
  */
Id player_get_location(Player* player);

/**
  * @brief It gets the name of a player
  * @author Juan Martinez
  * 
  * @param player a pointer to the player
  * @param Id to the id
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS player_set_location(Player* player, Id id);

Id player_get_object_id(Player* player);

/**
  * @brief It sets the object id of a player
  * @author Juan Martinez
  * 
  * @param player a pointer to the player
  * @param Id to the id
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS player_set_object_id(Player* player, Id id);

/**
  * @brief It prints the player
  * @author Alberto Gomez-Rodulfo
  * 
  * @param object a pointer to the object
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS player_print(Player* player);

/**
  * @brief It gets the player of the game
  * @author Alejandro Hernandez
  * 
  * @param player a pointer to the player
  * @return  an id with the player
  */
Id game_get_player(Player *player);

#endif