#ifndef s32retdec_H
#define s32retdec_H

#include "w2c2_base.h"

typedef struct s32retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s32retdecInstance;

void f0(s32retdecInstance*);

void f1(s32retdecInstance*);

U32 f2(s32retdecInstance*);

void f3(s32retdecInstance*,U32);

U32 f4(s32retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s32retdecInstance*,U32,U32,U32,U32,U32);

void f6(s32retdecInstance*,U32);

void f7(s32retdecInstance*,U32,U32,U32);

void f8(s32retdecInstance*,U32,U32,U32);

void s32retdec____wasm_call_ctors(s32retdecInstance*i);

void s32retdec____wasm_apply_data_relocs(s32retdecInstance*i);

U32 s32retdec_func_1(s32retdecInstance*i);

void s32retdec_call_cb(s32retdecInstance*i,U32 l0);

void s32retdecInstantiate(s32retdecInstance* instance, void* resolve(const char* module, const char* name));

void s32retdecFreeInstance(s32retdecInstance* instance);

#endif /* s32retdec_H */

