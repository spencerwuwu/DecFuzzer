#ifndef s526retdec_H
#define s526retdec_H

#include "w2c2_base.h"

typedef struct s526retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s526retdecInstance;

void f0(s526retdecInstance*);

void f1(s526retdecInstance*);

U32 f2(s526retdecInstance*);

void f3(s526retdecInstance*,U32);

U32 f4(s526retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s526retdecInstance*,U32,U32,U32,U32,U32);

void f6(s526retdecInstance*,U32);

void f7(s526retdecInstance*,U32,U32,U32);

void f8(s526retdecInstance*,U32,U32,U32);

void s526retdec____wasm_call_ctors(s526retdecInstance*i);

void s526retdec____wasm_apply_data_relocs(s526retdecInstance*i);

U32 s526retdec_func_1(s526retdecInstance*i);

void s526retdec_call_cb(s526retdecInstance*i,U32 l0);

void s526retdecInstantiate(s526retdecInstance* instance, void* resolve(const char* module, const char* name));

void s526retdecFreeInstance(s526retdecInstance* instance);

#endif /* s526retdec_H */

