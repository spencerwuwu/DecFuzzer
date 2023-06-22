#ifndef s657retdec_H
#define s657retdec_H

#include "w2c2_base.h"

typedef struct s657retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s657retdecInstance;

void f0(s657retdecInstance*);

void f1(s657retdecInstance*);

U32 f2(s657retdecInstance*);

void f3(s657retdecInstance*,U32);

U32 f4(s657retdecInstance*,U32,U32,U32,U32,U32);

void f5(s657retdecInstance*,U32,U32,U32,U32,U32);

void f6(s657retdecInstance*,U32);

void f7(s657retdecInstance*,U32,U32,U32);

void f8(s657retdecInstance*,U32,U32,U32);

void s657retdec____wasm_call_ctors(s657retdecInstance*i);

void s657retdec____wasm_apply_data_relocs(s657retdecInstance*i);

U32 s657retdec_func_1(s657retdecInstance*i);

void s657retdec_call_cb(s657retdecInstance*i,U32 l0);

void s657retdecInstantiate(s657retdecInstance* instance, void* resolve(const char* module, const char* name));

void s657retdecFreeInstance(s657retdecInstance* instance);

#endif /* s657retdec_H */

