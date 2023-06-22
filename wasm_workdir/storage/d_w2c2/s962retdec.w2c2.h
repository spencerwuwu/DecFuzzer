#ifndef s962retdec_H
#define s962retdec_H

#include "w2c2_base.h"

typedef struct s962retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s962retdecInstance;

void f0(s962retdecInstance*);

void f1(s962retdecInstance*);

U32 f2(s962retdecInstance*);

void f3(s962retdecInstance*,U32);

U32 f4(s962retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s962retdecInstance*,U32,U32,U32,U32,U32);

void f6(s962retdecInstance*,U32);

void f7(s962retdecInstance*,U32,U32,U32);

void f8(s962retdecInstance*,U32,U32,U32);

void s962retdec____wasm_call_ctors(s962retdecInstance*i);

void s962retdec____wasm_apply_data_relocs(s962retdecInstance*i);

U32 s962retdec_func_1(s962retdecInstance*i);

void s962retdec_call_cb(s962retdecInstance*i,U32 l0);

void s962retdecInstantiate(s962retdecInstance* instance, void* resolve(const char* module, const char* name));

void s962retdecFreeInstance(s962retdecInstance* instance);

#endif /* s962retdec_H */

