#ifndef GAME_READER_H
#define GAME_READER_H

#include "game.h"
#include "space.h"
#include "types.h"

/**
  * @brief It creates a new space for the game
  * @author Juan Martinez
  *
  * game_add_space allocates memory for a new space
  *  and initializes its members
  * @param Game pointer to the game
  * @param Object pointer to the object
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS game_add_space(Game *game, Space *space);

/**
  * @brief It load the space for the game
  * @author Alejandro Hernandez
  *
  * game_load_space initializes the space needed for the game
  * @param Game pointer to the game
  * @param a char pointing to de file name
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS game_load_spaces(Game *game, char *filename);


#endif

