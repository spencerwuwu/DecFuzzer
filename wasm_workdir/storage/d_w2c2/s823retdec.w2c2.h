#ifndef s823retdec_H
#define s823retdec_H

#include "w2c2_base.h"

typedef struct s823retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s823retdecInstance;

void f0(s823retdecInstance*);

void f1(s823retdecInstance*);

U32 f2(s823retdecInstance*);

void f3(s823retdecInstance*,U32);

U32 f4(s823retdecInstance*,U32,U32,U32,U32,U32);

void f5(s823retdecInstance*,U32,U32,U32,U32,U32);

void f6(s823retdecInstance*,U32);

void f7(s823retdecInstance*,U32,U32,U32);

void f8(s823retdecInstance*,U32,U32,U32);

void s823retdec____wasm_call_ctors(s823retdecInstance*i);

void s823retdec____wasm_apply_data_relocs(s823retdecInstance*i);

U32 s823retdec_func_1(s823retdecInstance*i);

void s823retdec_call_cb(s823retdecInstance*i,U32 l0);

void s823retdecInstantiate(s823retdecInstance* instance, void* resolve(const char* module, const char* name));

void s823retdecFreeInstance(s823retdecInstance* instance);

#endif /* s823retdec_H */

