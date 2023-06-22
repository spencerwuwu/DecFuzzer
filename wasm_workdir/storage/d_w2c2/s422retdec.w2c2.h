#ifndef s422retdec_H
#define s422retdec_H

#include "w2c2_base.h"

typedef struct s422retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s422retdecInstance;

void f0(s422retdecInstance*);

void f1(s422retdecInstance*);

U32 f2(s422retdecInstance*);

void f3(s422retdecInstance*,U32);

U32 f4(s422retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s422retdecInstance*,U32,U32,U32,U32,U32);

void f6(s422retdecInstance*,U32);

void f7(s422retdecInstance*,U32,U32,U32);

void f8(s422retdecInstance*,U32,U32,U32);

void s422retdec____wasm_call_ctors(s422retdecInstance*i);

void s422retdec____wasm_apply_data_relocs(s422retdecInstance*i);

U32 s422retdec_func_1(s422retdecInstance*i);

void s422retdec_call_cb(s422retdecInstance*i,U32 l0);

void s422retdecInstantiate(s422retdecInstance* instance, void* resolve(const char* module, const char* name));

void s422retdecFreeInstance(s422retdecInstance* instance);

#endif /* s422retdec_H */

