#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"

class Orchestra {
    private:
    Musician * members;
    int max_size;
    int size;
    public:
    Orchestra();
    Orchestra(int size);
    int get_current_number_of_members();
    bool has_instrument(std::string instrument); //True if instrument present in any member
    Musician *get_members();  // returns the array of members of the orchestra
    bool add_musician(Musician new_musician); //if not full, add member (false if fail)
    ~Orchestra();
};
#endif
