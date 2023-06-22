#ifndef s601retdec_H
#define s601retdec_H

#include "w2c2_base.h"

typedef struct s601retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s601retdecInstance;

void f0(s601retdecInstance*);

void f1(s601retdecInstance*);

U32 f2(s601retdecInstance*);

void f3(s601retdecInstance*,U32);

U32 f4(s601retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s601retdecInstance*,U32,U32,U32,U32,U32);

void f6(s601retdecInstance*,U32);

void f7(s601retdecInstance*,U32,U32,U32);

void f8(s601retdecInstance*,U32,U32,U32);

void s601retdec____wasm_call_ctors(s601retdecInstance*i);

void s601retdec____wasm_apply_data_relocs(s601retdecInstance*i);

U32 s601retdec_func_1(s601retdecInstance*i);

void s601retdec_call_cb(s601retdecInstance*i,U32 l0);

void s601retdecInstantiate(s601retdecInstance* instance, void* resolve(const char* module, const char* name));

void s601retdecFreeInstance(s601retdecInstance* instance);

#endif /* s601retdec_H */

