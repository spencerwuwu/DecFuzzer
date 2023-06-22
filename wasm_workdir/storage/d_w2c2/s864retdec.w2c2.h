#ifndef s864retdec_H
#define s864retdec_H

#include "w2c2_base.h"

typedef struct s864retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s864retdecInstance;

void f0(s864retdecInstance*);

void f1(s864retdecInstance*);

U32 f2(s864retdecInstance*);

void f3(s864retdecInstance*,U32);

U32 f4(s864retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s864retdecInstance*,U32,U32,U32,U32,U32);

void f6(s864retdecInstance*,U32);

void f7(s864retdecInstance*,U32,U32,U32);

void f8(s864retdecInstance*,U32,U32,U32);

void s864retdec____wasm_call_ctors(s864retdecInstance*i);

void s864retdec____wasm_apply_data_relocs(s864retdecInstance*i);

U32 s864retdec_func_1(s864retdecInstance*i);

void s864retdec_call_cb(s864retdecInstance*i,U32 l0);

void s864retdecInstantiate(s864retdecInstance* instance, void* resolve(const char* module, const char* name));

void s864retdecFreeInstance(s864retdecInstance* instance);

#endif /* s864retdec_H */

