#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.h"


/**
 * @brief PLayer
 *
 * This struct stores all the information of the player.
 */
struct _Player{
    Id id;                          /*!< Id of the player id */
    char name[WORD_SIZE + 1];       /*!< char with the name of the player */
    Id location;                    /*!< Id with the location */
    Id object_id;                   /*!< Id of the object id */
};

/** player_create allocates memory for a new player
  *  and initializes its members
  */
Player* player_create(Id id){
  Player *newPlayer = NULL;

 /* Error control */
  if (id==NO_ID)
    return NULL;

  newPlayer = (Player *) malloc(sizeof (Player));
  if (newPlayer == NULL)
    return NULL;

  newPlayer->id = id;
  newPlayer->name[0] = '\0';
  newPlayer->location = NO_ID;
  newPlayer->object_id = NO_ID;
  return newPlayer;
}

/** player_destroy frees the previous memory allocation 
  *  for a player
  */
STATUS player_destroy(Player* player){
    
     /* Error control */
  if (!player)
    return ERROR;

  free(player);
  player = NULL;
  return OK;
}

/** It gets the id of a player
  */
Id player_get_id(Player* player){
    
    /* Error control */
  if (!player)
    return NO_ID;

  return player->id;
}

/** It sets the id of a player
  */
STATUS player_set_id(Player* player, Id id){
    
    /* Error control */
  if(!player||id==NO_ID)
    return ERROR;

  player->id= id;
  return OK;
}

/** It sets the name of a player
  */
STATUS player_set_name(Player* player, char* name) {
    
    /* Error Control */
  if (!player || !name)
    return ERROR;

  if (!strcpy(player->name, name))
    return ERROR;

  return OK;
}

/** It gets the name of a player
  */
const char * player_get_name(Player* player) {
    
    /* Error Control */
  if (!player)
    return NULL;

  return player->name;
}

/** It gets the location of a player
  */
Id player_get_location(Player* player){
    
    /* Error Control */
  if(!player)
    return NO_ID;

  return player->location;
}

/** It sets the location of a player
  */
STATUS player_set_location(Player* player, Id id){
    
    /* Error Control */
  if(!player||id==NO_ID)
    return ERROR;

  player->location=id;
  return OK;
}

/** It gets the nobject id of a player
  */
Id player_get_object_id(Player* player){
    
    /* Error Control */
  if(!player)
    return NO_ID;

  return player->object_id;
}

/** It sets the object id of a player
  */
STATUS player_set_object_id(Player* player, Id id){
    
    /* Error Control */
  if(!player)
    return ERROR;

  player->object_id=id;
  return OK;
}

/** It prints the player information
  */
STATUS player_print(Player* player){
    
    /* Error Control */
  if (!player)
    return ERROR;

  fprintf(stdout, "-->player (id: %ld; name: %s; location: %ld; object: %ld)\n", player->id, player->name,player->location,player->object_id);
  return OK;
}
/** It gets the player of the game
  */
Id game_get_player(Player *player){
	
	/* Error Control */
	if(!player)
		return NO_ID;
	
	return player->id;
}


