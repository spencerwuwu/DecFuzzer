#ifndef s776retdec_H
#define s776retdec_H

#include "w2c2_base.h"

typedef struct s776retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s776retdecInstance;

void f0(s776retdecInstance*);

void f1(s776retdecInstance*);

U32 f2(s776retdecInstance*);

void f3(s776retdecInstance*,U32);

U32 f4(s776retdecInstance*,U32,U32,U32);

void f5(s776retdecInstance*,U32,U32,U32,U32,U32);

void f6(s776retdecInstance*,U32);

void f7(s776retdecInstance*,U32,U32,U32);

void f8(s776retdecInstance*,U32,U32,U32);

void s776retdec____wasm_call_ctors(s776retdecInstance*i);

void s776retdec____wasm_apply_data_relocs(s776retdecInstance*i);

U32 s776retdec_func_1(s776retdecInstance*i);

void s776retdec_call_cb(s776retdecInstance*i,U32 l0);

void s776retdecInstantiate(s776retdecInstance* instance, void* resolve(const char* module, const char* name));

void s776retdecFreeInstance(s776retdecInstance* instance);

#endif /* s776retdec_H */

