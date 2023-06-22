#ifndef s406retdec_H
#define s406retdec_H

#include "w2c2_base.h"

typedef struct s406retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s406retdecInstance;

void f0(s406retdecInstance*);

void f1(s406retdecInstance*);

U32 f2(s406retdecInstance*);

void f3(s406retdecInstance*,U32);

U32 f4(s406retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s406retdecInstance*,U32,U32,U32,U32,U32);

void f6(s406retdecInstance*,U32);

void f7(s406retdecInstance*,U32,U32,U32);

void f8(s406retdecInstance*,U32,U32,U32);

void s406retdec____wasm_call_ctors(s406retdecInstance*i);

void s406retdec____wasm_apply_data_relocs(s406retdecInstance*i);

U32 s406retdec_func_1(s406retdecInstance*i);

void s406retdec_call_cb(s406retdecInstance*i,U32 l0);

void s406retdecInstantiate(s406retdecInstance* instance, void* resolve(const char* module, const char* name));

void s406retdecFreeInstance(s406retdecInstance* instance);

#endif /* s406retdec_H */

