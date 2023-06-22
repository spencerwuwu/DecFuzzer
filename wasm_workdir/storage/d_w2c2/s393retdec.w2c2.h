#ifndef s393retdec_H
#define s393retdec_H

#include "w2c2_base.h"

typedef struct s393retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s393retdecInstance;

void f0(s393retdecInstance*);

void f1(s393retdecInstance*);

U32 f2(s393retdecInstance*);

void f3(s393retdecInstance*,U32);

U32 f4(s393retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s393retdecInstance*,U32,U32,U32,U32,U32);

void f6(s393retdecInstance*,U32);

void f7(s393retdecInstance*,U32,U32,U32);

void f8(s393retdecInstance*,U32,U32,U32);

void s393retdec____wasm_call_ctors(s393retdecInstance*i);

void s393retdec____wasm_apply_data_relocs(s393retdecInstance*i);

U32 s393retdec_func_1(s393retdecInstance*i);

void s393retdec_call_cb(s393retdecInstance*i,U32 l0);

void s393retdecInstantiate(s393retdecInstance* instance, void* resolve(const char* module, const char* name));

void s393retdecFreeInstance(s393retdecInstance* instance);

#endif /* s393retdec_H */

