#include <stdlib.h>
#include <assert.h>

void poi_void() { ; }
int poi_return_int() { return 42; }
char* poi_return_string() { return "poi"; }
void poi_exit() { exit(42); }
void poi_abort() { assert(0); }
