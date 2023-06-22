#ifndef s412retdec_H
#define s412retdec_H

#include "w2c2_base.h"

typedef struct s412retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s412retdecInstance;

void f0(s412retdecInstance*);

void f1(s412retdecInstance*);

U32 f2(s412retdecInstance*);

void f3(s412retdecInstance*,U32);

U32 f4(s412retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s412retdecInstance*,U32,U32,U32,U32,U32);

void f6(s412retdecInstance*,U32);

void f7(s412retdecInstance*,U32,U32,U32);

void f8(s412retdecInstance*,U32,U32,U32);

void s412retdec____wasm_call_ctors(s412retdecInstance*i);

void s412retdec____wasm_apply_data_relocs(s412retdecInstance*i);

U32 s412retdec_func_1(s412retdecInstance*i);

void s412retdec_call_cb(s412retdecInstance*i,U32 l0);

void s412retdecInstantiate(s412retdecInstance* instance, void* resolve(const char* module, const char* name));

void s412retdecFreeInstance(s412retdecInstance* instance);

#endif /* s412retdec_H */

