#ifndef s48retdec_H
#define s48retdec_H

#include "w2c2_base.h"

typedef struct s48retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s48retdecInstance;

void f0(s48retdecInstance*);

void f1(s48retdecInstance*);

U32 f2(s48retdecInstance*);

void f3(s48retdecInstance*,U32);

U32 f4(s48retdecInstance*,U32,U32,U32);

void f5(s48retdecInstance*,U32,U32,U32,U32,U32);

void f6(s48retdecInstance*,U32);

void f7(s48retdecInstance*,U32,U32,U32);

void f8(s48retdecInstance*,U32,U32,U32);

void s48retdec____wasm_call_ctors(s48retdecInstance*i);

void s48retdec____wasm_apply_data_relocs(s48retdecInstance*i);

U32 s48retdec_func_1(s48retdecInstance*i);

void s48retdec_call_cb(s48retdecInstance*i,U32 l0);

void s48retdecInstantiate(s48retdecInstance* instance, void* resolve(const char* module, const char* name));

void s48retdecFreeInstance(s48retdecInstance* instance);

#endif /* s48retdec_H */

