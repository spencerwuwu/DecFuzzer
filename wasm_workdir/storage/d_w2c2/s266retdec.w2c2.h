#ifndef s266retdec_H
#define s266retdec_H

#include "w2c2_base.h"

typedef struct s266retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s266retdecInstance;

void f0(s266retdecInstance*);

void f1(s266retdecInstance*);

U32 f2(s266retdecInstance*);

void f3(s266retdecInstance*,U32);

U32 f4(s266retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s266retdecInstance*,U32,U32,U32,U32,U32);

void f6(s266retdecInstance*,U32);

void f7(s266retdecInstance*,U32,U32,U32);

void f8(s266retdecInstance*,U32,U32,U32);

void s266retdec____wasm_call_ctors(s266retdecInstance*i);

void s266retdec____wasm_apply_data_relocs(s266retdecInstance*i);

U32 s266retdec_func_1(s266retdecInstance*i);

void s266retdec_call_cb(s266retdecInstance*i,U32 l0);

void s266retdecInstantiate(s266retdecInstance* instance, void* resolve(const char* module, const char* name));

void s266retdecFreeInstance(s266retdecInstance* instance);

#endif /* s266retdec_H */

