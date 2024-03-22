#include "Person.h"


Person* createPersonArray(int n) {

    Person* array = new Person[n];

    for (int i = 0; i < n; i++){

        array[i].name = "Jane Doe";
        array[i].age = 1;

    }

    return array;
}

PersonList deepCopyPersonList(PersonList pl) {

    PersonList deepCopy;

    deepCopy.numPeople = pl.numPeople;
    deepCopy.people = createPersonArray(pl.numPeople);

    for (int i = 0; i < pl.numPeople; i++){

        deepCopy.people[i].name = pl.people[i].name;
        deepCopy.people[i].age = pl.people[i].age;

    }

    return deepCopy;

}