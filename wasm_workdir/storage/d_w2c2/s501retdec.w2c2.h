#ifndef s501retdec_H
#define s501retdec_H

#include "w2c2_base.h"

typedef struct s501retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s501retdecInstance;

void f0(s501retdecInstance*);

void f1(s501retdecInstance*);

U32 f2(s501retdecInstance*);

void f3(s501retdecInstance*,U32);

U32 f4(s501retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s501retdecInstance*,U32,U32,U32,U32,U32);

void f6(s501retdecInstance*,U32);

void f7(s501retdecInstance*,U32,U32,U32);

void f8(s501retdecInstance*,U32,U32,U32);

void s501retdec____wasm_call_ctors(s501retdecInstance*i);

void s501retdec____wasm_apply_data_relocs(s501retdecInstance*i);

U32 s501retdec_func_1(s501retdecInstance*i);

void s501retdec_call_cb(s501retdecInstance*i,U32 l0);

void s501retdecInstantiate(s501retdecInstance* instance, void* resolve(const char* module, const char* name));

void s501retdecFreeInstance(s501retdecInstance* instance);

#endif /* s501retdec_H */

