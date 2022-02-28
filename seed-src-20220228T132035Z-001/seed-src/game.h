/** 
 * @brief It defines the game interface
 * 
 * @file game.h
 * @author Profesores PPROG
 * @version 2.0 
 * @date 29-11-2021 
 * @copyright GNU Public License
 */
 
#ifndef GAME_H
#define GAME_H

#include "command.h"
#include "space.h"
#include "types.h"
#include "object.h"
#include "player.h"

/**
 * @brief Game
 *
 * This struct stores all the information of the game.
 */
typedef struct _Game
{
  Player *player;
  Object *object;
  Space *spaces[MAX_SPACES];
  T_Command last_cmd;
} Game;

/**
  * @brief It creates a new game
  * @author Juan Martinez
  *
  * game_create creates space for the game and initializes its members
  * @param Game pointer to a game 
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS game_create(Game *game);

/**
  * @brief It locates the player and the object at the game
  * @author Juan Martinez
  *
  * game_create_from_file locates the player and the object at the first space
  * @param Game pointer to a game 
  * @param char pointer to de file name
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS game_create_from_file(Game *game, char *filename);

/**
  * @brief It updates the game in relation with the command you use
  * @author Alejandro Hernandez
  *
  * game_update uses the commands to update the game 
  * @param Game pointer to a game
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS game_update(Game *game, T_Command cmd);

/**
  * @brief It destroy the space created 
  * @author Alberto Gomez-Rodulfo
  *
  * game_create destroy space for the game
  * @param Game pointer to a game 
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS game_destroy(Game *game);

/**
  * @brief It finishes the game
  * @author Alejandro Hernandez
  *
  * game_is_over finishes the game
  * @param Game pointer to a game 
  * @return FALSE
  */
BOOL game_is_over(Game *game);

/**
  * @brief It shows on screen game´s data
  * @author Alberto Gomez-Rodulfo
  *
  * game_print_data prints on screen the game data
  * @param Game pointer to a game 
  * @return
  */
void game_print_data(Game *game);

/**
  * @brief It gets the space for the game
  * @author Juan Martinez
  *
  * @param Game pointer to a game 
  * @param Id to an id
  * @return a pointer to Space
  */
Space *game_get_space(Game *game, Id id);

/**
  * @brief It gets the player location
  * @author Juan Martinez
  *
  * @param Game pointer to a game 
  * @return the Id for the player location
  */
Id game_get_player_location(Game *game);

/**
  * @brief It gets the object location
  * @author Juan Martinez
  *
  * @param Game pointer to a game 
  * @return the Id for the object location
  */
void game_command_take(Game *game);
Id game_get_object_location(Game *game);
STATUS game_set_object_location(Game *game, Id id);
STATUS game_set_player_location(Game *game, Id id);
T_Command game_get_last_command(Game *game);
#endif
