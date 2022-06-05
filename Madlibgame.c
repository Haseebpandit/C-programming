//madlibs game
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char colour[20];
    char PluralNoun[100];
    char celebrityF[50];
    char celebrityL[50];
    printf("Choose Your Colour: ");
    scanf("%s", colour);
    printf("Choose Any Plural Noun: ");
    scanf("%s", PluralNoun);
    printf("Choose A Celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);
    printf("Roses are %s\n", colour);
    printf("%s are blue\n", PluralNoun);
    printf("I love %s %s\n", celebrityF , celebrityL);
    return 0;
}
