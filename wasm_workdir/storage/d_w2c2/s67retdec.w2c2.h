#ifndef s67retdec_H
#define s67retdec_H

#include "w2c2_base.h"

typedef struct s67retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s67retdecInstance;

void f0(s67retdecInstance*);

void f1(s67retdecInstance*);

U32 f2(s67retdecInstance*);

void f3(s67retdecInstance*,U32);

U32 f4(s67retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s67retdecInstance*,U32,U32,U32,U32,U32);

void f6(s67retdecInstance*,U32);

void f7(s67retdecInstance*,U32,U32,U32);

void f8(s67retdecInstance*,U32,U32,U32);

void s67retdec____wasm_call_ctors(s67retdecInstance*i);

void s67retdec____wasm_apply_data_relocs(s67retdecInstance*i);

U32 s67retdec_func_1(s67retdecInstance*i);

void s67retdec_call_cb(s67retdecInstance*i,U32 l0);

void s67retdecInstantiate(s67retdecInstance* instance, void* resolve(const char* module, const char* name));

void s67retdecFreeInstance(s67retdecInstance* instance);

#endif /* s67retdec_H */

