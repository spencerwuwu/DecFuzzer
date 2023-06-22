#ifndef s55retdec_H
#define s55retdec_H

#include "w2c2_base.h"

typedef struct s55retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s55retdecInstance;

void f0(s55retdecInstance*);

void f1(s55retdecInstance*);

U32 f2(s55retdecInstance*);

void f3(s55retdecInstance*,U32);

U32 f4(s55retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s55retdecInstance*,U32,U32,U32,U32,U32);

void f6(s55retdecInstance*,U32);

void f7(s55retdecInstance*,U32,U32,U32);

void f8(s55retdecInstance*,U32,U32,U32);

void s55retdec____wasm_call_ctors(s55retdecInstance*i);

void s55retdec____wasm_apply_data_relocs(s55retdecInstance*i);

U32 s55retdec_func_1(s55retdecInstance*i);

void s55retdec_call_cb(s55retdecInstance*i,U32 l0);

void s55retdecInstantiate(s55retdecInstance* instance, void* resolve(const char* module, const char* name));

void s55retdecFreeInstance(s55retdecInstance* instance);

#endif /* s55retdec_H */

