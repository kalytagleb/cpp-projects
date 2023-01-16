#include <stdio.h>

int main(void) {
    enum WDAYS { Sun, Mon, Tue, Wed, Thu, Fri, Sat};
    char* day_name[] = { "неділя", "понеділок",
    "вівторок", "середа", "четвер", "пятниця", "субота" };
    enum WDAYS wday = Fri;
    printf (" That day - %s.\n", day_name[wday]);
}