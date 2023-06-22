#ifndef s138retdec_H
#define s138retdec_H

#include "w2c2_base.h"

typedef struct s138retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s138retdecInstance;

void f0(s138retdecInstance*);

void f1(s138retdecInstance*);

U32 f2(s138retdecInstance*);

void f3(s138retdecInstance*,U32);

U32 f4(s138retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s138retdecInstance*,U32,U32,U32,U32,U32);

void f6(s138retdecInstance*,U32);

void f7(s138retdecInstance*,U32,U32,U32);

void f8(s138retdecInstance*,U32,U32,U32);

void s138retdec____wasm_call_ctors(s138retdecInstance*i);

void s138retdec____wasm_apply_data_relocs(s138retdecInstance*i);

U32 s138retdec_func_1(s138retdecInstance*i);

void s138retdec_call_cb(s138retdecInstance*i,U32 l0);

void s138retdecInstantiate(s138retdecInstance* instance, void* resolve(const char* module, const char* name));

void s138retdecFreeInstance(s138retdecInstance* instance);

#endif /* s138retdec_H */

