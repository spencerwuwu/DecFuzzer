#ifndef s933retdec_H
#define s933retdec_H

#include "w2c2_base.h"

typedef struct s933retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s933retdecInstance;

void f0(s933retdecInstance*);

void f1(s933retdecInstance*);

U32 f2(s933retdecInstance*);

void f3(s933retdecInstance*,U32);

U32 f4(s933retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s933retdecInstance*,U32,U32,U32,U32,U32);

void f6(s933retdecInstance*,U32);

void f7(s933retdecInstance*,U32,U32,U32);

void f8(s933retdecInstance*,U32,U32,U32);

void s933retdec____wasm_call_ctors(s933retdecInstance*i);

void s933retdec____wasm_apply_data_relocs(s933retdecInstance*i);

U32 s933retdec_func_1(s933retdecInstance*i);

void s933retdec_call_cb(s933retdecInstance*i,U32 l0);

void s933retdecInstantiate(s933retdecInstance* instance, void* resolve(const char* module, const char* name));

void s933retdecFreeInstance(s933retdecInstance* instance);

#endif /* s933retdec_H */

