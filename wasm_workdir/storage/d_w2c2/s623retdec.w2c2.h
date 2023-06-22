#ifndef s623retdec_H
#define s623retdec_H

#include "w2c2_base.h"

typedef struct s623retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s623retdecInstance;

void f0(s623retdecInstance*);

void f1(s623retdecInstance*);

U32 f2(s623retdecInstance*);

void f3(s623retdecInstance*,U32);

U32 f4(s623retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s623retdecInstance*,U32,U32,U32,U32,U32);

void f6(s623retdecInstance*,U32);

void f7(s623retdecInstance*,U32,U32,U32);

void f8(s623retdecInstance*,U32,U32,U32);

void s623retdec____wasm_call_ctors(s623retdecInstance*i);

void s623retdec____wasm_apply_data_relocs(s623retdecInstance*i);

U32 s623retdec_func_1(s623retdecInstance*i);

void s623retdec_call_cb(s623retdecInstance*i,U32 l0);

void s623retdecInstantiate(s623retdecInstance* instance, void* resolve(const char* module, const char* name));

void s623retdecFreeInstance(s623retdecInstance* instance);

#endif /* s623retdec_H */

