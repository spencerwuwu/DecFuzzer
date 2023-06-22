#ifndef s88retdec_H
#define s88retdec_H

#include "w2c2_base.h"

typedef struct s88retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s88retdecInstance;

void f0(s88retdecInstance*);

void f1(s88retdecInstance*);

U32 f2(s88retdecInstance*);

void f3(s88retdecInstance*,U32);

U32 f4(s88retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s88retdecInstance*,U32,U32,U32,U32,U32);

void f6(s88retdecInstance*,U32);

void f7(s88retdecInstance*,U32,U32,U32);

void f8(s88retdecInstance*,U32,U32,U32);

void s88retdec____wasm_call_ctors(s88retdecInstance*i);

void s88retdec____wasm_apply_data_relocs(s88retdecInstance*i);

U32 s88retdec_func_1(s88retdecInstance*i);

void s88retdec_call_cb(s88retdecInstance*i,U32 l0);

void s88retdecInstantiate(s88retdecInstance* instance, void* resolve(const char* module, const char* name));

void s88retdecFreeInstance(s88retdecInstance* instance);

#endif /* s88retdec_H */

