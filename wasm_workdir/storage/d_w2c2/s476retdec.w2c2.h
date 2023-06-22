#ifndef s476retdec_H
#define s476retdec_H

#include "w2c2_base.h"

typedef struct s476retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s476retdecInstance;

void f0(s476retdecInstance*);

void f1(s476retdecInstance*);

U32 f2(s476retdecInstance*);

void f3(s476retdecInstance*,U32);

U32 f4(s476retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s476retdecInstance*,U32,U32,U32,U32,U32);

void f6(s476retdecInstance*,U32);

void f7(s476retdecInstance*,U32,U32,U32);

void f8(s476retdecInstance*,U32,U32,U32);

void s476retdec____wasm_call_ctors(s476retdecInstance*i);

void s476retdec____wasm_apply_data_relocs(s476retdecInstance*i);

U32 s476retdec_func_1(s476retdecInstance*i);

void s476retdec_call_cb(s476retdecInstance*i,U32 l0);

void s476retdecInstantiate(s476retdecInstance* instance, void* resolve(const char* module, const char* name));

void s476retdecFreeInstance(s476retdecInstance* instance);

#endif /* s476retdec_H */

