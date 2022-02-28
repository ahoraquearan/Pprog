
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "object.h"

/**
 * @brief Object
 *
 * This struct stores all the information of an object.
 */
struct _Object{
  Id id;                            /*!< Id number of the object */
  char name[WORD_SIZE + 1];         /*!< Name of the object */
};

/** object_create allocates memory for a new object
  *  and initializes its members
  */
Object* object_create(Id id){
  Object *newObject = NULL;

  if (id == NO_ID)
    return NULL;

  newObject = (Object *) malloc(sizeof (Object));
  if (newObject == NULL)
    return NULL;

  newObject->id = id;
  newObject->name[0] = '\0';
  return newObject;
}

/** object_destroy frees the previous memory allocation 
  *  for an object
  */
STATUS object_destroy(Object* object){
    
    /* Error Control */
  if (!object)
    return ERROR;

  free(object);
  object = NULL;
  return OK;
}

/** It gets the id of an object
  */
Id object_get_id(Object* object){
    
    /* Error Control */
  if (!object)
    return NO_ID;

  return object->id;
}

/** It sets the id of a space
  */
STATUS object_set_id(Object* object, Id id){
    
    /* Error Control */
  if(!object||id==NO_ID)
    return ERROR;

  object->id = id;
  return OK;
}

/** It sets the name of an object
  */
STATUS object_set_name(Object* object, char* name) {
    
    /* Error Control */
  if (!object || !name)
    return ERROR;

  if (!strcpy(object->name, name))
    return ERROR;

  return OK;
}

/** It prints the object
  */
STATUS object_print(Object* object){
    
    /* Error Control */
  if (!object)
    return ERROR;

  fprintf(stdout, "-->object (id: %ld; name: %s)\n", object->id, object->name);
  return OK;
}
/** It gets the game´s object
  */
Id game_get_object(Object *object){
	
	/* Error Control */
	if(!object)
		return NO_ID;
	
	return object->id;
}

