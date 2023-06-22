#ifndef s886retdec_H
#define s886retdec_H

#include "w2c2_base.h"

typedef struct s886retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s886retdecInstance;

void f0(s886retdecInstance*);

void f1(s886retdecInstance*);

U32 f2(s886retdecInstance*);

void f3(s886retdecInstance*,U32);

U32 f4(s886retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s886retdecInstance*,U32,U32,U32,U32,U32);

void f6(s886retdecInstance*,U32);

void f7(s886retdecInstance*,U32,U32,U32);

void f8(s886retdecInstance*,U32,U32,U32);

void s886retdec____wasm_call_ctors(s886retdecInstance*i);

void s886retdec____wasm_apply_data_relocs(s886retdecInstance*i);

U32 s886retdec_func_1(s886retdecInstance*i);

void s886retdec_call_cb(s886retdecInstance*i,U32 l0);

void s886retdecInstantiate(s886retdecInstance* instance, void* resolve(const char* module, const char* name));

void s886retdecFreeInstance(s886retdecInstance* instance);

#endif /* s886retdec_H */

