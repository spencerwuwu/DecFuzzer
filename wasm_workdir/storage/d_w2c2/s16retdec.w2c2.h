#ifndef s16retdec_H
#define s16retdec_H

#include "w2c2_base.h"

typedef struct s16retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s16retdecInstance;

void f0(s16retdecInstance*);

void f1(s16retdecInstance*);

U32 f2(s16retdecInstance*);

void f3(s16retdecInstance*,U32);

U32 f4(s16retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s16retdecInstance*,U32,U32,U32,U32,U32);

void f6(s16retdecInstance*,U32);

void f7(s16retdecInstance*,U32,U32,U32);

void f8(s16retdecInstance*,U32,U32,U32);

void s16retdec____wasm_call_ctors(s16retdecInstance*i);

void s16retdec____wasm_apply_data_relocs(s16retdecInstance*i);

U32 s16retdec_func_1(s16retdecInstance*i);

void s16retdec_call_cb(s16retdecInstance*i,U32 l0);

void s16retdecInstantiate(s16retdecInstance* instance, void* resolve(const char* module, const char* name));

void s16retdecFreeInstance(s16retdecInstance* instance);

#endif /* s16retdec_H */

