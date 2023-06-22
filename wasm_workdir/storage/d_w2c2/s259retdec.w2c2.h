#ifndef s259retdec_H
#define s259retdec_H

#include "w2c2_base.h"

typedef struct s259retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s259retdecInstance;

void f0(s259retdecInstance*);

void f1(s259retdecInstance*);

U32 f2(s259retdecInstance*);

void f3(s259retdecInstance*,U32);

U32 f4(s259retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s259retdecInstance*,U32,U32,U32,U32,U32);

void f6(s259retdecInstance*,U32);

void f7(s259retdecInstance*,U32,U32,U32);

void f8(s259retdecInstance*,U32,U32,U32);

void s259retdec____wasm_call_ctors(s259retdecInstance*i);

void s259retdec____wasm_apply_data_relocs(s259retdecInstance*i);

U32 s259retdec_func_1(s259retdecInstance*i);

void s259retdec_call_cb(s259retdecInstance*i,U32 l0);

void s259retdecInstantiate(s259retdecInstance* instance, void* resolve(const char* module, const char* name));

void s259retdecFreeInstance(s259retdecInstance* instance);

#endif /* s259retdec_H */

