#ifndef s108retdec_H
#define s108retdec_H

#include "w2c2_base.h"

typedef struct s108retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s108retdecInstance;

void f0(s108retdecInstance*);

void f1(s108retdecInstance*);

U32 f2(s108retdecInstance*);

void f3(s108retdecInstance*,U32);

U32 f4(s108retdecInstance*,U32,U32,U32,U32);

void f5(s108retdecInstance*,U32,U32,U32,U32,U32);

void f6(s108retdecInstance*,U32);

void f7(s108retdecInstance*,U32,U32,U32);

void f8(s108retdecInstance*,U32,U32,U32);

void s108retdec____wasm_call_ctors(s108retdecInstance*i);

void s108retdec____wasm_apply_data_relocs(s108retdecInstance*i);

U32 s108retdec_func_1(s108retdecInstance*i);

void s108retdec_call_cb(s108retdecInstance*i,U32 l0);

void s108retdecInstantiate(s108retdecInstance* instance, void* resolve(const char* module, const char* name));

void s108retdecFreeInstance(s108retdecInstance* instance);

#endif /* s108retdec_H */

