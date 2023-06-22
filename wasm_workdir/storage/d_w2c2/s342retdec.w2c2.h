#ifndef s342retdec_H
#define s342retdec_H

#include "w2c2_base.h"

typedef struct s342retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s342retdecInstance;

void f0(s342retdecInstance*);

void f1(s342retdecInstance*);

U32 f2(s342retdecInstance*);

void f3(s342retdecInstance*,U32);

U32 f4(s342retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s342retdecInstance*,U32,U32,U32,U32,U32);

void f6(s342retdecInstance*,U32);

void f7(s342retdecInstance*,U32,U32,U32);

void f8(s342retdecInstance*,U32,U32,U32);

void s342retdec____wasm_call_ctors(s342retdecInstance*i);

void s342retdec____wasm_apply_data_relocs(s342retdecInstance*i);

U32 s342retdec_func_1(s342retdecInstance*i);

void s342retdec_call_cb(s342retdecInstance*i,U32 l0);

void s342retdecInstantiate(s342retdecInstance* instance, void* resolve(const char* module, const char* name));

void s342retdecFreeInstance(s342retdecInstance* instance);

#endif /* s342retdec_H */

