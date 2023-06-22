#ifndef s194retdec_H
#define s194retdec_H

#include "w2c2_base.h"

typedef struct s194retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s194retdecInstance;

void f0(s194retdecInstance*);

void f1(s194retdecInstance*);

U32 f2(s194retdecInstance*);

void f3(s194retdecInstance*,U32);

U32 f4(s194retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s194retdecInstance*,U32,U32,U32,U32,U32);

void f6(s194retdecInstance*,U32);

void f7(s194retdecInstance*,U32,U32,U32);

void f8(s194retdecInstance*,U32,U32,U32);

void s194retdec____wasm_call_ctors(s194retdecInstance*i);

void s194retdec____wasm_apply_data_relocs(s194retdecInstance*i);

U32 s194retdec_func_1(s194retdecInstance*i);

void s194retdec_call_cb(s194retdecInstance*i,U32 l0);

void s194retdecInstantiate(s194retdecInstance* instance, void* resolve(const char* module, const char* name));

void s194retdecFreeInstance(s194retdecInstance* instance);

#endif /* s194retdec_H */

