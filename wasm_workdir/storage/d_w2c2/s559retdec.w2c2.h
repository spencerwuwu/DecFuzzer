#ifndef s559retdec_H
#define s559retdec_H

#include "w2c2_base.h"

typedef struct s559retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s559retdecInstance;

void f0(s559retdecInstance*);

void f1(s559retdecInstance*);

U32 f2(s559retdecInstance*);

void f3(s559retdecInstance*,U32);

U32 f4(s559retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s559retdecInstance*,U32,U32,U32,U32,U32);

void f6(s559retdecInstance*,U32);

void f7(s559retdecInstance*,U32,U32,U32);

void f8(s559retdecInstance*,U32,U32,U32);

void s559retdec____wasm_call_ctors(s559retdecInstance*i);

void s559retdec____wasm_apply_data_relocs(s559retdecInstance*i);

U32 s559retdec_func_1(s559retdecInstance*i);

void s559retdec_call_cb(s559retdecInstance*i,U32 l0);

void s559retdecInstantiate(s559retdecInstance* instance, void* resolve(const char* module, const char* name));

void s559retdecFreeInstance(s559retdecInstance* instance);

#endif /* s559retdec_H */

