#ifndef s896retdec_H
#define s896retdec_H

#include "w2c2_base.h"

typedef struct s896retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s896retdecInstance;

void f0(s896retdecInstance*);

void f1(s896retdecInstance*);

U32 f2(s896retdecInstance*);

void f3(s896retdecInstance*,U32);

U32 f4(s896retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s896retdecInstance*,U32,U32,U32,U32,U32);

void f6(s896retdecInstance*,U32);

void f7(s896retdecInstance*,U32,U32,U32);

void f8(s896retdecInstance*,U32,U32,U32);

void s896retdec____wasm_call_ctors(s896retdecInstance*i);

void s896retdec____wasm_apply_data_relocs(s896retdecInstance*i);

U32 s896retdec_func_1(s896retdecInstance*i);

void s896retdec_call_cb(s896retdecInstance*i,U32 l0);

void s896retdecInstantiate(s896retdecInstance* instance, void* resolve(const char* module, const char* name));

void s896retdecFreeInstance(s896retdecInstance* instance);

#endif /* s896retdec_H */

