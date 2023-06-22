#ifndef s281retdec_H
#define s281retdec_H

#include "w2c2_base.h"

typedef struct s281retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s281retdecInstance;

void f0(s281retdecInstance*);

void f1(s281retdecInstance*);

U32 f2(s281retdecInstance*);

void f3(s281retdecInstance*,U32);

U32 f4(s281retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s281retdecInstance*,U32,U32,U32,U32,U32);

void f6(s281retdecInstance*,U32);

void f7(s281retdecInstance*,U32,U32,U32);

void f8(s281retdecInstance*,U32,U32,U32);

void s281retdec____wasm_call_ctors(s281retdecInstance*i);

void s281retdec____wasm_apply_data_relocs(s281retdecInstance*i);

U32 s281retdec_func_1(s281retdecInstance*i);

void s281retdec_call_cb(s281retdecInstance*i,U32 l0);

void s281retdecInstantiate(s281retdecInstance* instance, void* resolve(const char* module, const char* name));

void s281retdecFreeInstance(s281retdecInstance* instance);

#endif /* s281retdec_H */

