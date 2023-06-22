#ifndef s312retdec_H
#define s312retdec_H

#include "w2c2_base.h"

typedef struct s312retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s312retdecInstance;

void f0(s312retdecInstance*);

void f1(s312retdecInstance*);

U32 f2(s312retdecInstance*);

void f3(s312retdecInstance*,U32);

U32 f4(s312retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s312retdecInstance*,U32,U32,U32,U32,U32);

void f6(s312retdecInstance*,U32);

void f7(s312retdecInstance*,U32,U32,U32);

void f8(s312retdecInstance*,U32,U32,U32);

void s312retdec____wasm_call_ctors(s312retdecInstance*i);

void s312retdec____wasm_apply_data_relocs(s312retdecInstance*i);

U32 s312retdec_func_1(s312retdecInstance*i);

void s312retdec_call_cb(s312retdecInstance*i,U32 l0);

void s312retdecInstantiate(s312retdecInstance* instance, void* resolve(const char* module, const char* name));

void s312retdecFreeInstance(s312retdecInstance* instance);

#endif /* s312retdec_H */

