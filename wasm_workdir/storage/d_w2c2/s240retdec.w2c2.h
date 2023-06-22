#ifndef s240retdec_H
#define s240retdec_H

#include "w2c2_base.h"

typedef struct s240retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s240retdecInstance;

void f0(s240retdecInstance*);

void f1(s240retdecInstance*);

U32 f2(s240retdecInstance*);

void f3(s240retdecInstance*,U32);

U32 f4(s240retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s240retdecInstance*,U32,U32,U32,U32,U32);

void f6(s240retdecInstance*,U32);

void f7(s240retdecInstance*,U32,U32,U32);

void f8(s240retdecInstance*,U32,U32,U32);

void s240retdec____wasm_call_ctors(s240retdecInstance*i);

void s240retdec____wasm_apply_data_relocs(s240retdecInstance*i);

U32 s240retdec_func_1(s240retdecInstance*i);

void s240retdec_call_cb(s240retdecInstance*i,U32 l0);

void s240retdecInstantiate(s240retdecInstance* instance, void* resolve(const char* module, const char* name));

void s240retdecFreeInstance(s240retdecInstance* instance);

#endif /* s240retdec_H */

