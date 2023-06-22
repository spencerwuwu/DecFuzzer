#ifndef s842retdec_H
#define s842retdec_H

#include "w2c2_base.h"

typedef struct s842retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s842retdecInstance;

void f0(s842retdecInstance*);

void f1(s842retdecInstance*);

U32 f2(s842retdecInstance*);

void f3(s842retdecInstance*,U32);

U32 f4(s842retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s842retdecInstance*,U32,U32,U32,U32,U32);

void f6(s842retdecInstance*,U32);

void f7(s842retdecInstance*,U32,U32,U32);

void f8(s842retdecInstance*,U32,U32,U32);

void s842retdec____wasm_call_ctors(s842retdecInstance*i);

void s842retdec____wasm_apply_data_relocs(s842retdecInstance*i);

U32 s842retdec_func_1(s842retdecInstance*i);

void s842retdec_call_cb(s842retdecInstance*i,U32 l0);

void s842retdecInstantiate(s842retdecInstance* instance, void* resolve(const char* module, const char* name));

void s842retdecFreeInstance(s842retdecInstance* instance);

#endif /* s842retdec_H */

