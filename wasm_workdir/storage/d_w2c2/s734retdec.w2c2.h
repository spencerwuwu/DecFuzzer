#ifndef s734retdec_H
#define s734retdec_H

#include "w2c2_base.h"

typedef struct s734retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s734retdecInstance;

void f0(s734retdecInstance*);

void f1(s734retdecInstance*);

U32 f2(s734retdecInstance*);

void f3(s734retdecInstance*,U32);

U32 f4(s734retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s734retdecInstance*,U32,U32,U32,U32,U32);

void f6(s734retdecInstance*,U32);

void f7(s734retdecInstance*,U32,U32,U32);

void f8(s734retdecInstance*,U32,U32,U32);

void s734retdec____wasm_call_ctors(s734retdecInstance*i);

void s734retdec____wasm_apply_data_relocs(s734retdecInstance*i);

U32 s734retdec_func_1(s734retdecInstance*i);

void s734retdec_call_cb(s734retdecInstance*i,U32 l0);

void s734retdecInstantiate(s734retdecInstance* instance, void* resolve(const char* module, const char* name));

void s734retdecFreeInstance(s734retdecInstance* instance);

#endif /* s734retdec_H */

