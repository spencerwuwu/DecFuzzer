#ifndef s41retdec_H
#define s41retdec_H

#include "w2c2_base.h"

typedef struct s41retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s41retdecInstance;

void f0(s41retdecInstance*);

void f1(s41retdecInstance*);

U32 f2(s41retdecInstance*);

void f3(s41retdecInstance*,U32);

U32 f4(s41retdecInstance*,U32,U32,U32,U32);

void f5(s41retdecInstance*,U32,U32,U32,U32,U32);

void f6(s41retdecInstance*,U32);

void f7(s41retdecInstance*,U32,U32,U32);

void f8(s41retdecInstance*,U32,U32,U32);

void s41retdec____wasm_call_ctors(s41retdecInstance*i);

void s41retdec____wasm_apply_data_relocs(s41retdecInstance*i);

U32 s41retdec_func_1(s41retdecInstance*i);

void s41retdec_call_cb(s41retdecInstance*i,U32 l0);

void s41retdecInstantiate(s41retdecInstance* instance, void* resolve(const char* module, const char* name));

void s41retdecFreeInstance(s41retdecInstance* instance);

#endif /* s41retdec_H */

