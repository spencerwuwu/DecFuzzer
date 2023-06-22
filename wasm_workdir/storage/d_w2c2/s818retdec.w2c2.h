#ifndef s818retdec_H
#define s818retdec_H

#include "w2c2_base.h"

typedef struct s818retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s818retdecInstance;

void f0(s818retdecInstance*);

void f1(s818retdecInstance*);

U32 f2(s818retdecInstance*);

void f3(s818retdecInstance*,U32);

U32 f4(s818retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s818retdecInstance*,U32,U32,U32,U32,U32);

void f6(s818retdecInstance*,U32);

void f7(s818retdecInstance*,U32,U32,U32);

void f8(s818retdecInstance*,U32,U32,U32);

void s818retdec____wasm_call_ctors(s818retdecInstance*i);

void s818retdec____wasm_apply_data_relocs(s818retdecInstance*i);

U32 s818retdec_func_1(s818retdecInstance*i);

void s818retdec_call_cb(s818retdecInstance*i,U32 l0);

void s818retdecInstantiate(s818retdecInstance* instance, void* resolve(const char* module, const char* name));

void s818retdecFreeInstance(s818retdecInstance* instance);

#endif /* s818retdec_H */

