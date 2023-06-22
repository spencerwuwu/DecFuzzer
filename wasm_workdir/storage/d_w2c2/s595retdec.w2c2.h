#ifndef s595retdec_H
#define s595retdec_H

#include "w2c2_base.h"

typedef struct s595retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s595retdecInstance;

void f0(s595retdecInstance*);

void f1(s595retdecInstance*);

U32 f2(s595retdecInstance*);

void f3(s595retdecInstance*,U32);

U32 f4(s595retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s595retdecInstance*,U32,U32,U32,U32,U32);

void f6(s595retdecInstance*,U32);

void f7(s595retdecInstance*,U32,U32,U32);

void f8(s595retdecInstance*,U32,U32,U32);

void s595retdec____wasm_call_ctors(s595retdecInstance*i);

void s595retdec____wasm_apply_data_relocs(s595retdecInstance*i);

U32 s595retdec_func_1(s595retdecInstance*i);

void s595retdec_call_cb(s595retdecInstance*i,U32 l0);

void s595retdecInstantiate(s595retdecInstance* instance, void* resolve(const char* module, const char* name));

void s595retdecFreeInstance(s595retdecInstance* instance);

#endif /* s595retdec_H */

