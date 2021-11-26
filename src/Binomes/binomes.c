#include "./binomes.h"

Binome *create_binomes(WaitingRoom *room){
    Binome* binomes = malloc(sizeof(Binome) * (MAX_CLIENTS/2));
}

int *randomly_mix_clients(WaitingRoom *room){
    int *clients_id = room->id_clients;
    // Randomly mix half of the clients id
    for(int i=0;i<room->size/2;i++){
        int randomIndex = rand() % room->size;

        int id_client_to_move = clients_id[i];
        clients_id[i] = clients_id[randomIndex];
        clients_id[randomIndex] = id_client_to_move;
    }
    return clients_id;
}

void initialize_binome(Binome *binome){
    binome->size = 0;
}



