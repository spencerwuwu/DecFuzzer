#ifndef s838retdec_H
#define s838retdec_H

#include "w2c2_base.h"

typedef struct s838retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s838retdecInstance;

void f0(s838retdecInstance*);

void f1(s838retdecInstance*);

U32 f2(s838retdecInstance*);

void f3(s838retdecInstance*,U32);

U32 f4(s838retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s838retdecInstance*,U32,U32,U32,U32,U32);

void f6(s838retdecInstance*,U32);

void f7(s838retdecInstance*,U32,U32,U32);

void f8(s838retdecInstance*,U32,U32,U32);

void s838retdec____wasm_call_ctors(s838retdecInstance*i);

void s838retdec____wasm_apply_data_relocs(s838retdecInstance*i);

U32 s838retdec_func_1(s838retdecInstance*i);

void s838retdec_call_cb(s838retdecInstance*i,U32 l0);

void s838retdecInstantiate(s838retdecInstance* instance, void* resolve(const char* module, const char* name));

void s838retdecFreeInstance(s838retdecInstance* instance);

#endif /* s838retdec_H */

