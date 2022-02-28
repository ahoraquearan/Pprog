/**
 * @brief It defines the textual graphic engine interface
 *
 * @file graphic_engine.h
 * @author Profesores PPROG
 * @version 2.0
 * @date 29-11-2021
 * @copyright GNU Public License
 */

#ifndef __GRAPHIC_ENGINE__
#define __GRAPHIC_ENGINE__

#include "game.h"

typedef struct _Graphic_engine Graphic_engine;

/**
  * @brief It creates a new graphic engine
  * @author Juan Martinez
  *
  * graphic_engine_create allocates memory for the graphic engine
  *  and initializes its members
  * @param 
  * @return the graphic engine
  */
Graphic_engine *graphic_engine_create();

/**
  * @brief It destroys the current graphic engine
  * @author Alberto Gomez-Rodulfo
  *
  * graphic_engine_destroy frees the previous memory for the graphic engine
  * @param Graphic engine pointer to ge
  * @return 
  */
void graphic_engine_destroy(Graphic_engine *ge);

/**
  * @brief It paints the game on the screen
  * @author Alberto Gomez-Rodulfo
  *
  * graphic_engine_paint_game shows the game on screen
  * @param Graphic engine pointer to ge
  * @param Game pointer to game
  * @return 
  */
void graphic_engine_paint_game(Graphic_engine *ge, Game *game);

#endif
