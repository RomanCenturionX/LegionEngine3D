#include "collision.h"
#include "entity.h"


entity Entities[MAX_ENTITIES];

/* Initializes the fighter list that holds both of the player characters */
void InitEntityList()
{
	int i;
	for (i = 0; i<MAX_ENTITIES; ++i)
	{
		memset(&Entities[i], 0, sizeof(entity));
	}
}
/* Gets the location of the fighter from the fighter list and returns the location */
entity * getEntity(int player)
{
	if (player >= MAX_ENTITIES)return NULL;
	return &Entities[player];
}
/* Sets the first player's data */
void InitEntity(entity* e, long character)
{
	e->x = 110;
	e->y = 610;
	e->t = clock();
}
/* Frees the memory that is held by the fighter */
void FreeEntity(entity* e)
{
	FreeSprite(e->sprite);
	memset(e, 0, sizeof(entity));
}

/* Loads the fighter from a text file into the game */
void LoadEntity(entity* e, long character)
{

}
/* Allows the user to edit the data of any fighter */
int EditEntity()
{

}
