#ifndef s830retdec_H
#define s830retdec_H

#include "w2c2_base.h"

typedef struct s830retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s830retdecInstance;

void f0(s830retdecInstance*);

void f1(s830retdecInstance*);

U32 f2(s830retdecInstance*);

void f3(s830retdecInstance*,U32);

U32 f4(s830retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s830retdecInstance*,U32,U32,U32,U32,U32);

void f6(s830retdecInstance*,U32);

void f7(s830retdecInstance*,U32,U32,U32);

void f8(s830retdecInstance*,U32,U32,U32);

void s830retdec____wasm_call_ctors(s830retdecInstance*i);

void s830retdec____wasm_apply_data_relocs(s830retdecInstance*i);

U32 s830retdec_func_1(s830retdecInstance*i);

void s830retdec_call_cb(s830retdecInstance*i,U32 l0);

void s830retdecInstantiate(s830retdecInstance* instance, void* resolve(const char* module, const char* name));

void s830retdecFreeInstance(s830retdecInstance* instance);

#endif /* s830retdec_H */

