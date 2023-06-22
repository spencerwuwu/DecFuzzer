#ifndef s684retdec_H
#define s684retdec_H

#include "w2c2_base.h"

typedef struct s684retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s684retdecInstance;

void f0(s684retdecInstance*);

void f1(s684retdecInstance*);

U32 f2(s684retdecInstance*);

void f3(s684retdecInstance*,U32);

U32 f4(s684retdecInstance*,U32,U32,U32);

void f5(s684retdecInstance*,U32,U32,U32,U32,U32);

void f6(s684retdecInstance*,U32);

void f7(s684retdecInstance*,U32,U32,U32);

void f8(s684retdecInstance*,U32,U32,U32);

void s684retdec____wasm_call_ctors(s684retdecInstance*i);

void s684retdec____wasm_apply_data_relocs(s684retdecInstance*i);

U32 s684retdec_func_1(s684retdecInstance*i);

void s684retdec_call_cb(s684retdecInstance*i,U32 l0);

void s684retdecInstantiate(s684retdecInstance* instance, void* resolve(const char* module, const char* name));

void s684retdecFreeInstance(s684retdecInstance* instance);

#endif /* s684retdec_H */

