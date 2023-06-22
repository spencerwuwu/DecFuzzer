#ifndef s630retdec_H
#define s630retdec_H

#include "w2c2_base.h"

typedef struct s630retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s630retdecInstance;

void f0(s630retdecInstance*);

void f1(s630retdecInstance*);

U32 f2(s630retdecInstance*);

void f3(s630retdecInstance*,U32);

U32 f4(s630retdecInstance*,U32,U32,U32,U32);

void f5(s630retdecInstance*,U32,U32,U32,U32,U32);

void f6(s630retdecInstance*,U32);

void f7(s630retdecInstance*,U32,U32,U32);

void f8(s630retdecInstance*,U32,U32,U32);

void s630retdec____wasm_call_ctors(s630retdecInstance*i);

void s630retdec____wasm_apply_data_relocs(s630retdecInstance*i);

U32 s630retdec_func_1(s630retdecInstance*i);

void s630retdec_call_cb(s630retdecInstance*i,U32 l0);

void s630retdecInstantiate(s630retdecInstance* instance, void* resolve(const char* module, const char* name));

void s630retdecFreeInstance(s630retdecInstance* instance);

#endif /* s630retdec_H */

