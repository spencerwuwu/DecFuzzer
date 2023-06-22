#ifndef s203retdec_H
#define s203retdec_H

#include "w2c2_base.h"

typedef struct s203retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s203retdecInstance;

void f0(s203retdecInstance*);

void f1(s203retdecInstance*);

U32 f2(s203retdecInstance*);

void f3(s203retdecInstance*,U32);

U32 f4(s203retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s203retdecInstance*,U32,U32,U32,U32,U32);

void f6(s203retdecInstance*,U32);

void f7(s203retdecInstance*,U32,U32,U32);

void f8(s203retdecInstance*,U32,U32,U32);

void s203retdec____wasm_call_ctors(s203retdecInstance*i);

void s203retdec____wasm_apply_data_relocs(s203retdecInstance*i);

U32 s203retdec_func_1(s203retdecInstance*i);

void s203retdec_call_cb(s203retdecInstance*i,U32 l0);

void s203retdecInstantiate(s203retdecInstance* instance, void* resolve(const char* module, const char* name));

void s203retdecFreeInstance(s203retdecInstance* instance);

#endif /* s203retdec_H */

