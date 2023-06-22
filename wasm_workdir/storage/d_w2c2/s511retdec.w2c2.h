#ifndef s511retdec_H
#define s511retdec_H

#include "w2c2_base.h"

typedef struct s511retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s511retdecInstance;

void f0(s511retdecInstance*);

void f1(s511retdecInstance*);

U32 f2(s511retdecInstance*);

void f3(s511retdecInstance*,U32);

U32 f4(s511retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s511retdecInstance*,U32,U32,U32,U32,U32);

void f6(s511retdecInstance*,U32);

void f7(s511retdecInstance*,U32,U32,U32);

void f8(s511retdecInstance*,U32,U32,U32);

void s511retdec____wasm_call_ctors(s511retdecInstance*i);

void s511retdec____wasm_apply_data_relocs(s511retdecInstance*i);

U32 s511retdec_func_1(s511retdecInstance*i);

void s511retdec_call_cb(s511retdecInstance*i,U32 l0);

void s511retdecInstantiate(s511retdecInstance* instance, void* resolve(const char* module, const char* name));

void s511retdecFreeInstance(s511retdecInstance* instance);

#endif /* s511retdec_H */

