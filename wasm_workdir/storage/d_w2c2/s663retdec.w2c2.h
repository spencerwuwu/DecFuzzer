#ifndef s663retdec_H
#define s663retdec_H

#include "w2c2_base.h"

typedef struct s663retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s663retdecInstance;

void f0(s663retdecInstance*);

void f1(s663retdecInstance*);

U32 f2(s663retdecInstance*);

void f3(s663retdecInstance*,U32);

U32 f4(s663retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s663retdecInstance*,U32,U32,U32,U32,U32);

void f6(s663retdecInstance*,U32);

void f7(s663retdecInstance*,U32,U32,U32);

void f8(s663retdecInstance*,U32,U32,U32);

void s663retdec____wasm_call_ctors(s663retdecInstance*i);

void s663retdec____wasm_apply_data_relocs(s663retdecInstance*i);

U32 s663retdec_func_1(s663retdecInstance*i);

void s663retdec_call_cb(s663retdecInstance*i,U32 l0);

void s663retdecInstantiate(s663retdecInstance* instance, void* resolve(const char* module, const char* name));

void s663retdecFreeInstance(s663retdecInstance* instance);

#endif /* s663retdec_H */

