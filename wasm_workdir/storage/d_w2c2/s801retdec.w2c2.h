#ifndef s801retdec_H
#define s801retdec_H

#include "w2c2_base.h"

typedef struct s801retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s801retdecInstance;

void f0(s801retdecInstance*);

void f1(s801retdecInstance*);

U32 f2(s801retdecInstance*);

void f3(s801retdecInstance*,U32);

U32 f4(s801retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s801retdecInstance*,U32,U32,U32,U32,U32);

void f6(s801retdecInstance*,U32);

void f7(s801retdecInstance*,U32,U32,U32);

void f8(s801retdecInstance*,U32,U32,U32);

void s801retdec____wasm_call_ctors(s801retdecInstance*i);

void s801retdec____wasm_apply_data_relocs(s801retdecInstance*i);

U32 s801retdec_func_1(s801retdecInstance*i);

void s801retdec_call_cb(s801retdecInstance*i,U32 l0);

void s801retdecInstantiate(s801retdecInstance* instance, void* resolve(const char* module, const char* name));

void s801retdecFreeInstance(s801retdecInstance* instance);

#endif /* s801retdec_H */

