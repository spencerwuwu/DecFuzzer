#ifndef s418retdec_H
#define s418retdec_H

#include "w2c2_base.h"

typedef struct s418retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s418retdecInstance;

void f0(s418retdecInstance*);

void f1(s418retdecInstance*);

U32 f2(s418retdecInstance*);

void f3(s418retdecInstance*,U32);

U32 f4(s418retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s418retdecInstance*,U32,U32,U32,U32,U32);

void f6(s418retdecInstance*,U32);

void f7(s418retdecInstance*,U32,U32,U32);

void f8(s418retdecInstance*,U32,U32,U32);

void s418retdec____wasm_call_ctors(s418retdecInstance*i);

void s418retdec____wasm_apply_data_relocs(s418retdecInstance*i);

U32 s418retdec_func_1(s418retdecInstance*i);

void s418retdec_call_cb(s418retdecInstance*i,U32 l0);

void s418retdecInstantiate(s418retdecInstance* instance, void* resolve(const char* module, const char* name));

void s418retdecFreeInstance(s418retdecInstance* instance);

#endif /* s418retdec_H */

