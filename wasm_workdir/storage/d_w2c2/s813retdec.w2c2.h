#ifndef s813retdec_H
#define s813retdec_H

#include "w2c2_base.h"

typedef struct s813retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s813retdecInstance;

void f0(s813retdecInstance*);

void f1(s813retdecInstance*);

U32 f2(s813retdecInstance*);

void f3(s813retdecInstance*,U32);

void f4(s813retdecInstance*,U32);

void s813retdec____wasm_call_ctors(s813retdecInstance*i);

void s813retdec____wasm_apply_data_relocs(s813retdecInstance*i);

U32 s813retdec_func_1(s813retdecInstance*i);

void s813retdec_call_cb(s813retdecInstance*i,U32 l0);

void s813retdecInstantiate(s813retdecInstance* instance, void* resolve(const char* module, const char* name));

void s813retdecFreeInstance(s813retdecInstance* instance);

#endif /* s813retdec_H */

