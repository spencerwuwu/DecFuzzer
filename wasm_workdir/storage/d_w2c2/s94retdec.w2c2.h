#ifndef s94retdec_H
#define s94retdec_H

#include "w2c2_base.h"

typedef struct s94retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s94retdecInstance;

void f0(s94retdecInstance*);

void f1(s94retdecInstance*);

U32 f2(s94retdecInstance*);

void f3(s94retdecInstance*,U32);

U32 f4(s94retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s94retdecInstance*,U32,U32,U32,U32,U32);

void f6(s94retdecInstance*,U32);

void f7(s94retdecInstance*,U32,U32,U32);

void f8(s94retdecInstance*,U32,U32,U32);

void s94retdec____wasm_call_ctors(s94retdecInstance*i);

void s94retdec____wasm_apply_data_relocs(s94retdecInstance*i);

U32 s94retdec_func_1(s94retdecInstance*i);

void s94retdec_call_cb(s94retdecInstance*i,U32 l0);

void s94retdecInstantiate(s94retdecInstance* instance, void* resolve(const char* module, const char* name));

void s94retdecFreeInstance(s94retdecInstance* instance);

#endif /* s94retdec_H */

