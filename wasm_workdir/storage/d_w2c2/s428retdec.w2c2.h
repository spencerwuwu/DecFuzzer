#ifndef s428retdec_H
#define s428retdec_H

#include "w2c2_base.h"

typedef struct s428retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s428retdecInstance;

void f0(s428retdecInstance*);

void f1(s428retdecInstance*);

U32 f2(s428retdecInstance*);

void f3(s428retdecInstance*,U32);

U32 f4(s428retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s428retdecInstance*,U32,U32,U32,U32,U32);

void f6(s428retdecInstance*,U32);

void f7(s428retdecInstance*,U32,U32,U32);

void f8(s428retdecInstance*,U32,U32,U32);

void s428retdec____wasm_call_ctors(s428retdecInstance*i);

void s428retdec____wasm_apply_data_relocs(s428retdecInstance*i);

U32 s428retdec_func_1(s428retdecInstance*i);

void s428retdec_call_cb(s428retdecInstance*i,U32 l0);

void s428retdecInstantiate(s428retdecInstance* instance, void* resolve(const char* module, const char* name));

void s428retdecFreeInstance(s428retdecInstance* instance);

#endif /* s428retdec_H */

