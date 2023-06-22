#ifndef s114retdec_H
#define s114retdec_H

#include "w2c2_base.h"

typedef struct s114retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s114retdecInstance;

void f0(s114retdecInstance*);

void f1(s114retdecInstance*);

U32 f2(s114retdecInstance*);

void f3(s114retdecInstance*,U32);

U32 f4(s114retdecInstance*,U32,U32,U32);

void f5(s114retdecInstance*,U32,U32,U32,U32,U32);

void f6(s114retdecInstance*,U32);

void f7(s114retdecInstance*,U32,U32,U32);

void f8(s114retdecInstance*,U32,U32,U32);

void s114retdec____wasm_call_ctors(s114retdecInstance*i);

void s114retdec____wasm_apply_data_relocs(s114retdecInstance*i);

U32 s114retdec_func_1(s114retdecInstance*i);

void s114retdec_call_cb(s114retdecInstance*i,U32 l0);

void s114retdecInstantiate(s114retdecInstance* instance, void* resolve(const char* module, const char* name));

void s114retdecFreeInstance(s114retdecInstance* instance);

#endif /* s114retdec_H */

