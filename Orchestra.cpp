#include <iostream>
#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra(){
    size = 0;
    max_size = 0;
}

Orchestra::Orchestra(int size_in){
    size = 0;
    max_size = size_in;
    members = new Musician[max_size];
}

int Orchestra::get_current_number_of_members(){
    return size;
}

bool Orchestra::has_instrument(std::string instrument){ //True if instrument present in any member
    for (int i = 0; i < size; i++){
        if (members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

Musician * Orchestra::get_members(){  // returns the array of members of the orchestra
    return members;
}

bool Orchestra::add_musician(Musician new_musician){ //if not full, add member (false if fail)
    if (size < max_size){
        members[size++] = new_musician;
        return true;
    }
    return false;
}

Orchestra::~Orchestra(){
    delete[] members;
}