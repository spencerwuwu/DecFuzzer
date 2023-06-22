#ifndef s729retdec_H
#define s729retdec_H

#include "w2c2_base.h"

typedef struct s729retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s729retdecInstance;

void f0(s729retdecInstance*);

void f1(s729retdecInstance*);

U32 f2(s729retdecInstance*);

void f3(s729retdecInstance*,U32);

U32 f4(s729retdecInstance*,U32,U32,U32,U32,U32);

void f5(s729retdecInstance*,U32,U32,U32,U32,U32);

void f6(s729retdecInstance*,U32);

void f7(s729retdecInstance*,U32,U32,U32);

void f8(s729retdecInstance*,U32,U32,U32);

void s729retdec____wasm_call_ctors(s729retdecInstance*i);

void s729retdec____wasm_apply_data_relocs(s729retdecInstance*i);

U32 s729retdec_func_1(s729retdecInstance*i);

void s729retdec_call_cb(s729retdecInstance*i,U32 l0);

void s729retdecInstantiate(s729retdecInstance* instance, void* resolve(const char* module, const char* name));

void s729retdecFreeInstance(s729retdecInstance* instance);

#endif /* s729retdec_H */

