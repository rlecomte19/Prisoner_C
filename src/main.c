#include <stdio.h>
#include <stdlib.h>

#include "./WaitingRoom/waiting_room.h"
#define MAX_CLIENTS 10

int main()
{
	int clients[MAX_CLIENTS];
	
	WaitingRoom *room = malloc(sizeof(WaitingRoom));
	
	if(room != NULL){
		initialize_waiting_room(room);
		
		add_to_waiting_room(room, 1);
		add_to_waiting_room(room, 14);
		add_to_waiting_room(room, 2);
		add_to_waiting_room(room, 63);
		add_to_waiting_room(room, 64);
		print_waiting_room(room);
		printf("\n");
	}else{
		printf("\n/!\\ La salle d'attente n'a pas pu être initialisée /!\\");
	}

	free(room);

	return (0);
}