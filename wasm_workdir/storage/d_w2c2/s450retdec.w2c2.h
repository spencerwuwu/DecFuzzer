#ifndef s450retdec_H
#define s450retdec_H

#include "w2c2_base.h"

typedef struct s450retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s450retdecInstance;

void f0(s450retdecInstance*);

void f1(s450retdecInstance*);

U32 f2(s450retdecInstance*);

void f3(s450retdecInstance*,U32);

U32 f4(s450retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s450retdecInstance*,U32,U32,U32,U32,U32);

void f6(s450retdecInstance*,U32);

void f7(s450retdecInstance*,U32,U32,U32);

void f8(s450retdecInstance*,U32,U32,U32);

void s450retdec____wasm_call_ctors(s450retdecInstance*i);

void s450retdec____wasm_apply_data_relocs(s450retdecInstance*i);

U32 s450retdec_func_1(s450retdecInstance*i);

void s450retdec_call_cb(s450retdecInstance*i,U32 l0);

void s450retdecInstantiate(s450retdecInstance* instance, void* resolve(const char* module, const char* name));

void s450retdecFreeInstance(s450retdecInstance* instance);

#endif /* s450retdec_H */

