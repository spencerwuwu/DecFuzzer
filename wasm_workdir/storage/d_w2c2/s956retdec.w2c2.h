#ifndef s956retdec_H
#define s956retdec_H

#include "w2c2_base.h"

typedef struct s956retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s956retdecInstance;

void f0(s956retdecInstance*);

void f1(s956retdecInstance*);

U32 f2(s956retdecInstance*);

void f3(s956retdecInstance*,U32);

U32 f4(s956retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s956retdecInstance*,U32,U32,U32,U32,U32);

void f6(s956retdecInstance*,U32);

void f7(s956retdecInstance*,U32,U32,U32);

void f8(s956retdecInstance*,U32,U32,U32);

void s956retdec____wasm_call_ctors(s956retdecInstance*i);

void s956retdec____wasm_apply_data_relocs(s956retdecInstance*i);

U32 s956retdec_func_1(s956retdecInstance*i);

void s956retdec_call_cb(s956retdecInstance*i,U32 l0);

void s956retdecInstantiate(s956retdecInstance* instance, void* resolve(const char* module, const char* name));

void s956retdecFreeInstance(s956retdecInstance* instance);

#endif /* s956retdec_H */

