#ifndef s188retdec_H
#define s188retdec_H

#include "w2c2_base.h"

typedef struct s188retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s188retdecInstance;

void f0(s188retdecInstance*);

void f1(s188retdecInstance*);

U32 f2(s188retdecInstance*);

void f3(s188retdecInstance*,U32);

void f4(s188retdecInstance*,U32);

void s188retdec____wasm_call_ctors(s188retdecInstance*i);

void s188retdec____wasm_apply_data_relocs(s188retdecInstance*i);

U32 s188retdec_func_1(s188retdecInstance*i);

void s188retdec_call_cb(s188retdecInstance*i,U32 l0);

void s188retdecInstantiate(s188retdecInstance* instance, void* resolve(const char* module, const char* name));

void s188retdecFreeInstance(s188retdecInstance* instance);

#endif /* s188retdec_H */

