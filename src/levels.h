#ifndef LEVELS_H_INCLUDED
#define LEVELS_H_INCLUDED

#include "defs.h"

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#define LEVEL_1 " 1: -rm 50:13:1:0.9:5:0.20:1 -cm 2:1:1:0.7/0:0:0:0 -z 4 "
#define LEVEL_2 " 2: -rm 50:13:1:0.9:5:0.20:1 -cm 3:1:1:0.7/0:0:0:0 -z 6 "
#define LEVEL_3 " 3: -rm 50:13:1:0.9:6:0.10:1 -cm 3:1:0:0.95/0:0:0:0 -cm 6:1:1:0.7/0:0:0:0 -z 8 "
#define LEVEL_4 " 4: -rm 1000:15:0.1:0.9:6:0.10:1 -cm 3:1:0:0.93/0:0:0:0 -cm 6:1:1:0.7/0:0:0:0 -cm 12:10:1:0.95/0:0:0:0 -z 12 "
#define LEVEL_5 " 5: -rm 1000:15:0.1:0.9:6:0.10:1 -cm 6:1:1:0.92/0:0:0:0 -z 12 "
#define LEVEL_6 " 6: -rm 1000:15:0.1:0.9:6:0.10:1 -cm 6:1:1:0.92/0:0:0:0 -z 14 "
#define LEVEL_7 " 7: -rm 1000:16:0.1:0.9:6:0.10:1 -cm 6:1:1:0.92/0:0:0:0 -z 14 "
#define LEVEL_8 " 8: -rm 1000:16:0.1:0.9:6:0.10:1 -cm 3:1:0:0.93/0:0:0:0 -cm 6:1:1:0.7/0:0:0:0 -cm 13:10:1:0.95/0:0:0:0 -z 14 "
#define LEVEL_9 " 9: -rm 2000:16:0.1:0.9:6:0.10:1 -cm 1:1:0:0.9/0:0:0:0 -cm 4:1:0:0.93/0:0:0:0 -cm 6:1:0:0.7/0:0:0:0 -cm 10:10:0:0.94/0:0:0:0 -cm 12:20:0:0.95/0:0:0:0 -cm 14:50:1:0.95/1:1:0:0.95 -cm 18:200:1:0.95/1:10:1:0.95 -c 30 -z 14 "
#define LEVEL_10 " 10: -rm 5000:16:0.1:0.9:6:0.10:1 -cm 1:1:0:0.9/0:0:0:0 -cm 4:1:0:0.93/0:0:0:0 -cm 6:1:0:0.7/0:0:0:0 -cm 12:10:0:0.95/0:0:0:0 -cm 14:50:1:0.95/1:1:0:0.95 -cm 20:500:1:0.95/2:20:1:0.95 -c 50 -z 14 "

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char    *GetLevels  (uint8_t);
void    PrintLevels (void);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#endif

