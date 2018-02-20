#include <stdio.h>

int main(int argc, char *argv[])
{
int distance=100;
float power=2.345f;
double super_power=56789.1234;
char initial='A';
char first_name[]="Zed";
char last_name[]="Shaw";
printf("\nYou are %d miles away.\n", distance);
printf("\nYou have %f levels of power.\n", power);
printf("\nYou have %f super powers.\n",super_power);
printf("\nI have %s first name.\n", first_name);
printf("\nI have %s last name.\n", last_name);
printf("\nI have initial %c\n", initial);
printf("\nMy whole name is %s%c.%s.\n", first_name, initial, last_name);

int bugs=100;
double bug_rate=1.2;
printf ("\nYou have %d bugs at the imaginary rate of %f\n", bugs, bug_rate);

long universe_of_defects=1L*1024L*1024L*1024L;
printf("\nThe entires universe has %ld bugs.\n", universe_of_defects);

double expected_bugs=bugs*bug_rate;
printf("\nyou are expected to have %fbugs.\n", expected_bugs);

double part_of_universe=expected_bugs/universe_of_defects;
printf("\nThis is only a %e portion of the universe.\n",part_of_universe);

//This Makes no sense, just a demo for something weird

char nul_byte='\0';
int care_percentage=bugs*nul_byte;
printf("Which means you shold care%d%%.", care_percentage);
return 0;
}
