#ifndef s289retdec_H
#define s289retdec_H

#include "w2c2_base.h"

typedef struct s289retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s289retdecInstance;

void f0(s289retdecInstance*);

void f1(s289retdecInstance*);

U32 f2(s289retdecInstance*);

void f3(s289retdecInstance*,U32);

U32 f4(s289retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s289retdecInstance*,U32,U32,U32,U32,U32);

void f6(s289retdecInstance*,U32);

void f7(s289retdecInstance*,U32,U32,U32);

void f8(s289retdecInstance*,U32,U32,U32);

void s289retdec____wasm_call_ctors(s289retdecInstance*i);

void s289retdec____wasm_apply_data_relocs(s289retdecInstance*i);

U32 s289retdec_func_1(s289retdecInstance*i);

void s289retdec_call_cb(s289retdecInstance*i,U32 l0);

void s289retdecInstantiate(s289retdecInstance* instance, void* resolve(const char* module, const char* name));

void s289retdecFreeInstance(s289retdecInstance* instance);

#endif /* s289retdec_H */

