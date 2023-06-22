#ifndef s403retdec_H
#define s403retdec_H

#include "w2c2_base.h"

typedef struct s403retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s403retdecInstance;

void f0(s403retdecInstance*);

void f1(s403retdecInstance*);

U32 f2(s403retdecInstance*);

void f3(s403retdecInstance*,U32);

U32 f4(s403retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s403retdecInstance*,U32,U32,U32,U32,U32);

void f6(s403retdecInstance*,U32);

void f7(s403retdecInstance*,U32,U32,U32);

void f8(s403retdecInstance*,U32,U32,U32);

void s403retdec____wasm_call_ctors(s403retdecInstance*i);

void s403retdec____wasm_apply_data_relocs(s403retdecInstance*i);

U32 s403retdec_func_1(s403retdecInstance*i);

void s403retdec_call_cb(s403retdecInstance*i,U32 l0);

void s403retdecInstantiate(s403retdecInstance* instance, void* resolve(const char* module, const char* name));

void s403retdecFreeInstance(s403retdecInstance* instance);

#endif /* s403retdec_H */

