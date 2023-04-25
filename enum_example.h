#include <stdio.h>

enum days{
monday,
tuesday,
wednesday,
thursday,
friday,
saturday,
sunday,
};

void print_day(enum day d){

switch(d){
case monday:printf("monday");break;
case tuesday:printf("tuesday");break;
case wednesday: printf("wenesday");break;
case thursday : printf("thursdahy");break;
case friday : printf("friday");break;
case saturday:printf("saturday");break;
case sunday:printf("sunday");break;
}
}

enum day  next_day(enum day d)
{
return (d+1%7);
}

int main(){
enum day today=friday;

print_day(today);

print_day(7);
return 0;
}


