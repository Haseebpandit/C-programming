//basic Story
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char CharacterName[] = "Trucer";
    int CharacterAge = 20;
    int Charactersize = 50;
    char Charactername[] = "Bucky";
    printf("There was a man named %s\n",  CharacterName);
    printf("He was %d \n", CharacterAge);
    printf("%s was nice to everyone\n", CharacterName);
    /* Jhonnyboy code*/
    CharacterAge = 60;
    printf("But by the age of %d\n", CharacterAge);
    printf("He became grumpy and his weight was decreased to %d kg\n", Charactersize);
    printf("And now nobody likes %s \n", CharacterName);
    printf("he had a friend named %s \n", Charactername);
    return 0;
}
