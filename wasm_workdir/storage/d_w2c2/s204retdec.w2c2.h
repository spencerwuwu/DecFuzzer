#ifndef s204retdec_H
#define s204retdec_H

#include "w2c2_base.h"

typedef struct s204retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s204retdecInstance;

void f0(s204retdecInstance*);

void f1(s204retdecInstance*);

U32 f2(s204retdecInstance*);

void f3(s204retdecInstance*,U32);

U32 f4(s204retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s204retdecInstance*,U32,U32,U32,U32,U32);

void f6(s204retdecInstance*,U32);

void f7(s204retdecInstance*,U32,U32,U32);

void f8(s204retdecInstance*,U32,U32,U32);

void s204retdec____wasm_call_ctors(s204retdecInstance*i);

void s204retdec____wasm_apply_data_relocs(s204retdecInstance*i);

U32 s204retdec_func_1(s204retdecInstance*i);

void s204retdec_call_cb(s204retdecInstance*i,U32 l0);

void s204retdecInstantiate(s204retdecInstance* instance, void* resolve(const char* module, const char* name));

void s204retdecFreeInstance(s204retdecInstance* instance);

#endif /* s204retdec_H */

