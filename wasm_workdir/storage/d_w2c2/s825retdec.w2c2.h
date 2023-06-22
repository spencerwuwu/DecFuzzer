#ifndef s825retdec_H
#define s825retdec_H

#include "w2c2_base.h"

typedef struct s825retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s825retdecInstance;

void f0(s825retdecInstance*);

void f1(s825retdecInstance*);

U32 f2(s825retdecInstance*);

void f3(s825retdecInstance*,U32);

U32 f4(s825retdecInstance*,U32,U32,U32,U32);

void f5(s825retdecInstance*,U32,U32,U32,U32,U32);

void f6(s825retdecInstance*,U32);

void f7(s825retdecInstance*,U32,U32,U32);

void f8(s825retdecInstance*,U32,U32,U32);

void s825retdec____wasm_call_ctors(s825retdecInstance*i);

void s825retdec____wasm_apply_data_relocs(s825retdecInstance*i);

U32 s825retdec_func_1(s825retdecInstance*i);

void s825retdec_call_cb(s825retdecInstance*i,U32 l0);

void s825retdecInstantiate(s825retdecInstance* instance, void* resolve(const char* module, const char* name));

void s825retdecFreeInstance(s825retdecInstance* instance);

#endif /* s825retdec_H */

