#ifndef s716retdec_H
#define s716retdec_H

#include "w2c2_base.h"

typedef struct s716retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s716retdecInstance;

void f0(s716retdecInstance*);

void f1(s716retdecInstance*);

U32 f2(s716retdecInstance*);

void f3(s716retdecInstance*,U32);

U32 f4(s716retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s716retdecInstance*,U32,U32,U32,U32,U32);

void f6(s716retdecInstance*,U32);

void f7(s716retdecInstance*,U32,U32,U32);

void f8(s716retdecInstance*,U32,U32,U32);

void s716retdec____wasm_call_ctors(s716retdecInstance*i);

void s716retdec____wasm_apply_data_relocs(s716retdecInstance*i);

U32 s716retdec_func_1(s716retdecInstance*i);

void s716retdec_call_cb(s716retdecInstance*i,U32 l0);

void s716retdecInstantiate(s716retdecInstance* instance, void* resolve(const char* module, const char* name));

void s716retdecFreeInstance(s716retdecInstance* instance);

#endif /* s716retdec_H */

