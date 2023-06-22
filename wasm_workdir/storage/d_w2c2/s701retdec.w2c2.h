#ifndef s701retdec_H
#define s701retdec_H

#include "w2c2_base.h"

typedef struct s701retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s701retdecInstance;

void f0(s701retdecInstance*);

void f1(s701retdecInstance*);

U32 f2(s701retdecInstance*);

void f3(s701retdecInstance*,U32);

U32 f4(s701retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s701retdecInstance*,U32,U32,U32,U32,U32);

void f6(s701retdecInstance*,U32);

void f7(s701retdecInstance*,U32,U32,U32);

void f8(s701retdecInstance*,U32,U32,U32);

void s701retdec____wasm_call_ctors(s701retdecInstance*i);

void s701retdec____wasm_apply_data_relocs(s701retdecInstance*i);

U32 s701retdec_func_1(s701retdecInstance*i);

void s701retdec_call_cb(s701retdecInstance*i,U32 l0);

void s701retdecInstantiate(s701retdecInstance* instance, void* resolve(const char* module, const char* name));

void s701retdecFreeInstance(s701retdecInstance* instance);

#endif /* s701retdec_H */

