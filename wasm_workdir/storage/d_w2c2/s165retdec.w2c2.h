#ifndef s165retdec_H
#define s165retdec_H

#include "w2c2_base.h"

typedef struct s165retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s165retdecInstance;

void f0(s165retdecInstance*);

void f1(s165retdecInstance*);

U32 f2(s165retdecInstance*);

void f3(s165retdecInstance*,U32);

U32 f4(s165retdecInstance*,U32,U32,U32,U32,U32);

void f5(s165retdecInstance*,U32,U32,U32,U32,U32);

void f6(s165retdecInstance*,U32);

void f7(s165retdecInstance*,U32,U32,U32);

void f8(s165retdecInstance*,U32,U32,U32);

void s165retdec____wasm_call_ctors(s165retdecInstance*i);

void s165retdec____wasm_apply_data_relocs(s165retdecInstance*i);

U32 s165retdec_func_1(s165retdecInstance*i);

void s165retdec_call_cb(s165retdecInstance*i,U32 l0);

void s165retdecInstantiate(s165retdecInstance* instance, void* resolve(const char* module, const char* name));

void s165retdecFreeInstance(s165retdecInstance* instance);

#endif /* s165retdec_H */

