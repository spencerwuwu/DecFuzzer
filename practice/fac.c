#include "fac.h"


long int fac(int n) {
    if (n>=1)
        return n*fac(n-1);
    else
        return 1;
}

long int func_1(int n) {
    return fac(n);
}

void call_cb(void (*cb) (const char* str)) {
  cb("hi again!");
}
