#ifndef s253retdec_H
#define s253retdec_H

#include "w2c2_base.h"

typedef struct s253retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s253retdecInstance;

void f0(s253retdecInstance*);

void f1(s253retdecInstance*);

U32 f2(s253retdecInstance*);

void f3(s253retdecInstance*,U32);

void f4(s253retdecInstance*,U32);

void s253retdec____wasm_call_ctors(s253retdecInstance*i);

void s253retdec____wasm_apply_data_relocs(s253retdecInstance*i);

U32 s253retdec_func_1(s253retdecInstance*i);

void s253retdec_call_cb(s253retdecInstance*i,U32 l0);

void s253retdecInstantiate(s253retdecInstance* instance, void* resolve(const char* module, const char* name));

void s253retdecFreeInstance(s253retdecInstance* instance);

#endif /* s253retdec_H */

