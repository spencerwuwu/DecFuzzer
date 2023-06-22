#ifndef s566retdec_H
#define s566retdec_H

#include "w2c2_base.h"

typedef struct s566retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s566retdecInstance;

void f0(s566retdecInstance*);

void f1(s566retdecInstance*);

U32 f2(s566retdecInstance*);

void f3(s566retdecInstance*,U32);

U32 f4(s566retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s566retdecInstance*,U32,U32,U32,U32,U32);

void f6(s566retdecInstance*,U32);

void f7(s566retdecInstance*,U32,U32,U32);

void f8(s566retdecInstance*,U32,U32,U32);

void s566retdec____wasm_call_ctors(s566retdecInstance*i);

void s566retdec____wasm_apply_data_relocs(s566retdecInstance*i);

U32 s566retdec_func_1(s566retdecInstance*i);

void s566retdec_call_cb(s566retdecInstance*i,U32 l0);

void s566retdecInstantiate(s566retdecInstance* instance, void* resolve(const char* module, const char* name));

void s566retdecFreeInstance(s566retdecInstance* instance);

#endif /* s566retdec_H */

