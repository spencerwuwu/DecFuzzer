#ifndef s513retdec_H
#define s513retdec_H

#include "w2c2_base.h"

typedef struct s513retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s513retdecInstance;

void f0(s513retdecInstance*);

void f1(s513retdecInstance*);

U32 f2(s513retdecInstance*);

void f3(s513retdecInstance*,U32);

U32 f4(s513retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s513retdecInstance*,U32,U32,U32,U32,U32);

void f6(s513retdecInstance*,U32);

void f7(s513retdecInstance*,U32,U32,U32);

void f8(s513retdecInstance*,U32,U32,U32);

void s513retdec____wasm_call_ctors(s513retdecInstance*i);

void s513retdec____wasm_apply_data_relocs(s513retdecInstance*i);

U32 s513retdec_func_1(s513retdecInstance*i);

void s513retdec_call_cb(s513retdecInstance*i,U32 l0);

void s513retdecInstantiate(s513retdecInstance* instance, void* resolve(const char* module, const char* name));

void s513retdecFreeInstance(s513retdecInstance* instance);

#endif /* s513retdec_H */

