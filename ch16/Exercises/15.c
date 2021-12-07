#include <stdio.h>

// (a) Declare a tag for an enumeration whose values represent the seven days of the week.
enum day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SHABBOS}; 

//(b) Use typedef to define a name for the enumeration of part (a)

typedef enum {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SHABBOS}; day;
