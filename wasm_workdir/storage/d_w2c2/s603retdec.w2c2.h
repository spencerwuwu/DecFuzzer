#ifndef s603retdec_H
#define s603retdec_H

#include "w2c2_base.h"

typedef struct s603retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s603retdecInstance;

void f0(s603retdecInstance*);

void f1(s603retdecInstance*);

U32 f2(s603retdecInstance*);

void f3(s603retdecInstance*,U32);

U32 f4(s603retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s603retdecInstance*,U32,U32,U32,U32,U32);

void f6(s603retdecInstance*,U32);

void f7(s603retdecInstance*,U32,U32,U32);

void f8(s603retdecInstance*,U32,U32,U32);

void s603retdec____wasm_call_ctors(s603retdecInstance*i);

void s603retdec____wasm_apply_data_relocs(s603retdecInstance*i);

U32 s603retdec_func_1(s603retdecInstance*i);

void s603retdec_call_cb(s603retdecInstance*i,U32 l0);

void s603retdecInstantiate(s603retdecInstance* instance, void* resolve(const char* module, const char* name));

void s603retdecFreeInstance(s603retdecInstance* instance);

#endif /* s603retdec_H */

