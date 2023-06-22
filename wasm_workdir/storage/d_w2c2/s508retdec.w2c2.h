#ifndef s508retdec_H
#define s508retdec_H

#include "w2c2_base.h"

typedef struct s508retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s508retdecInstance;

void f0(s508retdecInstance*);

void f1(s508retdecInstance*);

U32 f2(s508retdecInstance*);

void f3(s508retdecInstance*,U32);

U32 f4(s508retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s508retdecInstance*,U32,U32,U32,U32,U32);

void f6(s508retdecInstance*,U32);

void f7(s508retdecInstance*,U32,U32,U32);

void f8(s508retdecInstance*,U32,U32,U32);

void s508retdec____wasm_call_ctors(s508retdecInstance*i);

void s508retdec____wasm_apply_data_relocs(s508retdecInstance*i);

U32 s508retdec_func_1(s508retdecInstance*i);

void s508retdec_call_cb(s508retdecInstance*i,U32 l0);

void s508retdecInstantiate(s508retdecInstance* instance, void* resolve(const char* module, const char* name));

void s508retdecFreeInstance(s508retdecInstance* instance);

#endif /* s508retdec_H */

