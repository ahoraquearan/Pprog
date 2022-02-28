#ifndef OBJECT_H
#define OBJECT_H

#include "types.h"

#define OBJECT_ID 35

typedef struct _Object Object;

/**
  * @brief It creates a new space
  * @author Juan Martinez 
  *
  * space_create allocates memory for a new space
  *  and initializes its members
  * @param id the identification number for the new space
  * @return a new space, initialized
  */
Object* object_create(Id id);

/**
  * @brief It destroys a space
  * @author Juan Martinez 
  *
  * space_destroy frees the previous memory allocation 
  *  for a space
  * @param space a pointer to the space that must be destroyed  
  * @return OK, if everything goes well or ERROR if there was some mistake
  */
STATUS object_destroy(Object* object);

/**
  * @brief It gets the id of an object
  * @author Alejandro Hernandez
  * 
  * @param object a pointer to the object
  * @return the id of object
  */
Id object_get_id(Object* object);

/**
  * @brief It sets the id of a space
  * @author Alejandro Hernandez
  * 
  * @param space a pointer to the space
  * @param id to the id
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS object_set_id(Object* object, Id id);

/**
  * @brief It sets the name of a space
  * @author Alberto Gomez-Rodulfo
  * 
  * @param space a pointer to the space
  * @param name a string with the name to store
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS object_set_name(Object* object, char* name);

/**
  * @brief It gets the name of a space
  * @author Alberto Gomez-Rodulfo
  * 
  * @param space a pointer to the space
  * @return  a string with the name of the space
  */
const char* object_get_name(Object* object);

/**
  * @brief It sets the id of the space located at the north
  * @author Juan Martinez 
  * 
  * @param space a pointer to the space
  * @param id the id number of the space located at the north
  * @return OK, if everything goes well or ERROR if there was some mistake 
  */
STATUS object_print(Object* object);

#endif


