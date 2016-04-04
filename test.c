#include <assert.h>
#include <ok/ok.h>
#include "clamp.h"

#define TS(X) # X
#define T(expr) \
  assert(expr); \
  ok(TS(expr)); \

int
main (void) {
  int value = 5;
  T(5 == clamp(5, 0, 5));
  T(4 == clamp(5, 0, 4));
  T(4 == clamp(10, 0, 4));
  T(0 == clamp(-1, 0, 4));
  ok_done();
  return 0;
}
