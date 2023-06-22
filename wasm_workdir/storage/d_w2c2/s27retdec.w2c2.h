#ifndef s27retdec_H
#define s27retdec_H

#include "w2c2_base.h"

typedef struct s27retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s27retdecInstance;

void f0(s27retdecInstance*);

void f1(s27retdecInstance*);

U32 f2(s27retdecInstance*);

void f3(s27retdecInstance*,U32);

U32 f4(s27retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s27retdecInstance*,U32,U32,U32,U32,U32);

void f6(s27retdecInstance*,U32);

void f7(s27retdecInstance*,U32,U32,U32);

void f8(s27retdecInstance*,U32,U32,U32);

void s27retdec____wasm_call_ctors(s27retdecInstance*i);

void s27retdec____wasm_apply_data_relocs(s27retdecInstance*i);

U32 s27retdec_func_1(s27retdecInstance*i);

void s27retdec_call_cb(s27retdecInstance*i,U32 l0);

void s27retdecInstantiate(s27retdecInstance* instance, void* resolve(const char* module, const char* name));

void s27retdecFreeInstance(s27retdecInstance* instance);

#endif /* s27retdec_H */

