#ifndef s207retdec_H
#define s207retdec_H

#include "w2c2_base.h"

typedef struct s207retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s207retdecInstance;

void f0(s207retdecInstance*);

void f1(s207retdecInstance*);

U32 f2(s207retdecInstance*);

void f3(s207retdecInstance*,U32);

U32 f4(s207retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s207retdecInstance*,U32,U32,U32,U32,U32);

void f6(s207retdecInstance*,U32);

void f7(s207retdecInstance*,U32,U32,U32);

void f8(s207retdecInstance*,U32,U32,U32);

void s207retdec____wasm_call_ctors(s207retdecInstance*i);

void s207retdec____wasm_apply_data_relocs(s207retdecInstance*i);

U32 s207retdec_func_1(s207retdecInstance*i);

void s207retdec_call_cb(s207retdecInstance*i,U32 l0);

void s207retdecInstantiate(s207retdecInstance* instance, void* resolve(const char* module, const char* name));

void s207retdecFreeInstance(s207retdecInstance* instance);

#endif /* s207retdec_H */

