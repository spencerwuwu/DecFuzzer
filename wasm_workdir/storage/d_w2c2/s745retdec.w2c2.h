#ifndef s745retdec_H
#define s745retdec_H

#include "w2c2_base.h"

typedef struct s745retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s745retdecInstance;

void f0(s745retdecInstance*);

void f1(s745retdecInstance*);

U32 f2(s745retdecInstance*);

void f3(s745retdecInstance*,U32);

U32 f4(s745retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s745retdecInstance*,U32,U32,U32,U32,U32);

void f6(s745retdecInstance*,U32);

void f7(s745retdecInstance*,U32,U32,U32);

void f8(s745retdecInstance*,U32,U32,U32);

void s745retdec____wasm_call_ctors(s745retdecInstance*i);

void s745retdec____wasm_apply_data_relocs(s745retdecInstance*i);

U32 s745retdec_func_1(s745retdecInstance*i);

void s745retdec_call_cb(s745retdecInstance*i,U32 l0);

void s745retdecInstantiate(s745retdecInstance* instance, void* resolve(const char* module, const char* name));

void s745retdecFreeInstance(s745retdecInstance* instance);

#endif /* s745retdec_H */

