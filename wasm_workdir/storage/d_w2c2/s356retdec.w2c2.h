#ifndef s356retdec_H
#define s356retdec_H

#include "w2c2_base.h"

typedef struct s356retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s356retdecInstance;

void f0(s356retdecInstance*);

void f1(s356retdecInstance*);

U32 f2(s356retdecInstance*);

void f3(s356retdecInstance*,U32);

U32 f4(s356retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s356retdecInstance*,U32,U32,U32,U32,U32);

void f6(s356retdecInstance*,U32);

void f7(s356retdecInstance*,U32,U32,U32);

void f8(s356retdecInstance*,U32,U32,U32);

void s356retdec____wasm_call_ctors(s356retdecInstance*i);

void s356retdec____wasm_apply_data_relocs(s356retdecInstance*i);

U32 s356retdec_func_1(s356retdecInstance*i);

void s356retdec_call_cb(s356retdecInstance*i,U32 l0);

void s356retdecInstantiate(s356retdecInstance* instance, void* resolve(const char* module, const char* name));

void s356retdecFreeInstance(s356retdecInstance* instance);

#endif /* s356retdec_H */

