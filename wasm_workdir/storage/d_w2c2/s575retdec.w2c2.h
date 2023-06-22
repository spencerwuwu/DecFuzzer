#ifndef s575retdec_H
#define s575retdec_H

#include "w2c2_base.h"

typedef struct s575retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s575retdecInstance;

void f0(s575retdecInstance*);

void f1(s575retdecInstance*);

U32 f2(s575retdecInstance*);

void f3(s575retdecInstance*,U32);

U32 f4(s575retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s575retdecInstance*,U32,U32,U32,U32,U32);

void f6(s575retdecInstance*,U32);

void f7(s575retdecInstance*,U32,U32,U32);

void f8(s575retdecInstance*,U32,U32,U32);

void s575retdec____wasm_call_ctors(s575retdecInstance*i);

void s575retdec____wasm_apply_data_relocs(s575retdecInstance*i);

U32 s575retdec_func_1(s575retdecInstance*i);

void s575retdec_call_cb(s575retdecInstance*i,U32 l0);

void s575retdecInstantiate(s575retdecInstance* instance, void* resolve(const char* module, const char* name));

void s575retdecFreeInstance(s575retdecInstance* instance);

#endif /* s575retdec_H */

