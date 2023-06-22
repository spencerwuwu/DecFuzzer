#ifndef s477retdec_H
#define s477retdec_H

#include "w2c2_base.h"

typedef struct s477retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s477retdecInstance;

void f0(s477retdecInstance*);

void f1(s477retdecInstance*);

U32 f2(s477retdecInstance*);

void f3(s477retdecInstance*,U32);

U32 f4(s477retdecInstance*,U32,U32,U32,U32);

void f5(s477retdecInstance*,U32,U32,U32,U32,U32);

void f6(s477retdecInstance*,U32);

void f7(s477retdecInstance*,U32,U32,U32);

void f8(s477retdecInstance*,U32,U32,U32);

void s477retdec____wasm_call_ctors(s477retdecInstance*i);

void s477retdec____wasm_apply_data_relocs(s477retdecInstance*i);

U32 s477retdec_func_1(s477retdecInstance*i);

void s477retdec_call_cb(s477retdecInstance*i,U32 l0);

void s477retdecInstantiate(s477retdecInstance* instance, void* resolve(const char* module, const char* name));

void s477retdecFreeInstance(s477retdecInstance* instance);

#endif /* s477retdec_H */

