#ifndef s18retdec_H
#define s18retdec_H

#include "w2c2_base.h"

typedef struct s18retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s18retdecInstance;

void f0(s18retdecInstance*);

void f1(s18retdecInstance*);

U32 f2(s18retdecInstance*);

void f3(s18retdecInstance*,U32);

U32 f4(s18retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s18retdecInstance*,U32,U32,U32,U32,U32);

void f6(s18retdecInstance*,U32);

void f7(s18retdecInstance*,U32,U32,U32);

void f8(s18retdecInstance*,U32,U32,U32);

void s18retdec____wasm_call_ctors(s18retdecInstance*i);

void s18retdec____wasm_apply_data_relocs(s18retdecInstance*i);

U32 s18retdec_func_1(s18retdecInstance*i);

void s18retdec_call_cb(s18retdecInstance*i,U32 l0);

void s18retdecInstantiate(s18retdecInstance* instance, void* resolve(const char* module, const char* name));

void s18retdecFreeInstance(s18retdecInstance* instance);

#endif /* s18retdec_H */

