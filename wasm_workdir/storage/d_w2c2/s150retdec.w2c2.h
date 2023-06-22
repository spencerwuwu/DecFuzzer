#ifndef s150retdec_H
#define s150retdec_H

#include "w2c2_base.h"

typedef struct s150retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s150retdecInstance;

void f0(s150retdecInstance*);

void f1(s150retdecInstance*);

U32 f2(s150retdecInstance*);

void f3(s150retdecInstance*,U32);

U32 f4(s150retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s150retdecInstance*,U32,U32,U32,U32,U32);

void f6(s150retdecInstance*,U32);

void f7(s150retdecInstance*,U32,U32,U32);

void f8(s150retdecInstance*,U32,U32,U32);

void s150retdec____wasm_call_ctors(s150retdecInstance*i);

void s150retdec____wasm_apply_data_relocs(s150retdecInstance*i);

U32 s150retdec_func_1(s150retdecInstance*i);

void s150retdec_call_cb(s150retdecInstance*i,U32 l0);

void s150retdecInstantiate(s150retdecInstance* instance, void* resolve(const char* module, const char* name));

void s150retdecFreeInstance(s150retdecInstance* instance);

#endif /* s150retdec_H */

