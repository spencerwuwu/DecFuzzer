#ifndef s919retdec_H
#define s919retdec_H

#include "w2c2_base.h"

typedef struct s919retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s919retdecInstance;

void f0(s919retdecInstance*);

void f1(s919retdecInstance*);

U32 f2(s919retdecInstance*);

void f3(s919retdecInstance*,U32);

U32 f4(s919retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s919retdecInstance*,U32,U32,U32,U32,U32);

void f6(s919retdecInstance*,U32);

void f7(s919retdecInstance*,U32,U32,U32);

void f8(s919retdecInstance*,U32,U32,U32);

void s919retdec____wasm_call_ctors(s919retdecInstance*i);

void s919retdec____wasm_apply_data_relocs(s919retdecInstance*i);

U32 s919retdec_func_1(s919retdecInstance*i);

void s919retdec_call_cb(s919retdecInstance*i,U32 l0);

void s919retdecInstantiate(s919retdecInstance* instance, void* resolve(const char* module, const char* name));

void s919retdecFreeInstance(s919retdecInstance* instance);

#endif /* s919retdec_H */

