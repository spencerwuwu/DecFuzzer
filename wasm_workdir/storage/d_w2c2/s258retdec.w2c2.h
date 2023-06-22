#ifndef s258retdec_H
#define s258retdec_H

#include "w2c2_base.h"

typedef struct s258retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s258retdecInstance;

void f0(s258retdecInstance*);

void f1(s258retdecInstance*);

U32 f2(s258retdecInstance*);

void f3(s258retdecInstance*,U32);

U32 f4(s258retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s258retdecInstance*,U32,U32,U32,U32,U32);

void f6(s258retdecInstance*,U32);

void f7(s258retdecInstance*,U32,U32,U32);

void f8(s258retdecInstance*,U32,U32,U32);

void s258retdec____wasm_call_ctors(s258retdecInstance*i);

void s258retdec____wasm_apply_data_relocs(s258retdecInstance*i);

U32 s258retdec_func_1(s258retdecInstance*i);

void s258retdec_call_cb(s258retdecInstance*i,U32 l0);

void s258retdecInstantiate(s258retdecInstance* instance, void* resolve(const char* module, const char* name));

void s258retdecFreeInstance(s258retdecInstance* instance);

#endif /* s258retdec_H */

