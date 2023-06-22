#ifndef s953retdec_H
#define s953retdec_H

#include "w2c2_base.h"

typedef struct s953retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s953retdecInstance;

void f0(s953retdecInstance*);

void f1(s953retdecInstance*);

U32 f2(s953retdecInstance*);

void f3(s953retdecInstance*,U32);

U32 f4(s953retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s953retdecInstance*,U32,U32,U32,U32,U32);

void f6(s953retdecInstance*,U32);

void f7(s953retdecInstance*,U32,U32,U32);

void f8(s953retdecInstance*,U32,U32,U32);

void s953retdec____wasm_call_ctors(s953retdecInstance*i);

void s953retdec____wasm_apply_data_relocs(s953retdecInstance*i);

U32 s953retdec_func_1(s953retdecInstance*i);

void s953retdec_call_cb(s953retdecInstance*i,U32 l0);

void s953retdecInstantiate(s953retdecInstance* instance, void* resolve(const char* module, const char* name));

void s953retdecFreeInstance(s953retdecInstance* instance);

#endif /* s953retdec_H */

