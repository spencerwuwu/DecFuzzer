#ifndef s678retdec_H
#define s678retdec_H

#include "w2c2_base.h"

typedef struct s678retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s678retdecInstance;

void f0(s678retdecInstance*);

void f1(s678retdecInstance*);

U32 f2(s678retdecInstance*);

void f3(s678retdecInstance*,U32);

U32 f4(s678retdecInstance*,U32,U32,U32);

void f5(s678retdecInstance*,U32,U32,U32,U32,U32);

void f6(s678retdecInstance*,U32);

void f7(s678retdecInstance*,U32,U32,U32);

void f8(s678retdecInstance*,U32,U32,U32);

void s678retdec____wasm_call_ctors(s678retdecInstance*i);

void s678retdec____wasm_apply_data_relocs(s678retdecInstance*i);

U32 s678retdec_func_1(s678retdecInstance*i);

void s678retdec_call_cb(s678retdecInstance*i,U32 l0);

void s678retdecInstantiate(s678retdecInstance* instance, void* resolve(const char* module, const char* name));

void s678retdecFreeInstance(s678retdecInstance* instance);

#endif /* s678retdec_H */

