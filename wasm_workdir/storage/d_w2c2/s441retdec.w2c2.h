#ifndef s441retdec_H
#define s441retdec_H

#include "w2c2_base.h"

typedef struct s441retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s441retdecInstance;

void f0(s441retdecInstance*);

void f1(s441retdecInstance*);

U32 f2(s441retdecInstance*);

void f3(s441retdecInstance*,U32);

U32 f4(s441retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s441retdecInstance*,U32,U32,U32,U32,U32);

void f6(s441retdecInstance*,U32);

void f7(s441retdecInstance*,U32,U32,U32);

void f8(s441retdecInstance*,U32,U32,U32);

void s441retdec____wasm_call_ctors(s441retdecInstance*i);

void s441retdec____wasm_apply_data_relocs(s441retdecInstance*i);

U32 s441retdec_func_1(s441retdecInstance*i);

void s441retdec_call_cb(s441retdecInstance*i,U32 l0);

void s441retdecInstantiate(s441retdecInstance* instance, void* resolve(const char* module, const char* name));

void s441retdecFreeInstance(s441retdecInstance* instance);

#endif /* s441retdec_H */

