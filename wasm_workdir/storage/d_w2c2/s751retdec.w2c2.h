#ifndef s751retdec_H
#define s751retdec_H

#include "w2c2_base.h"

typedef struct s751retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s751retdecInstance;

void f0(s751retdecInstance*);

void f1(s751retdecInstance*);

U32 f2(s751retdecInstance*);

void f3(s751retdecInstance*,U32);

U32 f4(s751retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s751retdecInstance*,U32,U32,U32,U32,U32);

void f6(s751retdecInstance*,U32);

void f7(s751retdecInstance*,U32,U32,U32);

void f8(s751retdecInstance*,U32,U32,U32);

void s751retdec____wasm_call_ctors(s751retdecInstance*i);

void s751retdec____wasm_apply_data_relocs(s751retdecInstance*i);

U32 s751retdec_func_1(s751retdecInstance*i);

void s751retdec_call_cb(s751retdecInstance*i,U32 l0);

void s751retdecInstantiate(s751retdecInstance* instance, void* resolve(const char* module, const char* name));

void s751retdecFreeInstance(s751retdecInstance* instance);

#endif /* s751retdec_H */

