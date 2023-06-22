#ifndef s382retdec_H
#define s382retdec_H

#include "w2c2_base.h"

typedef struct s382retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s382retdecInstance;

void f0(s382retdecInstance*);

void f1(s382retdecInstance*);

U32 f2(s382retdecInstance*);

void f3(s382retdecInstance*,U32);

U32 f4(s382retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s382retdecInstance*,U32,U32,U32,U32,U32);

void f6(s382retdecInstance*,U32);

void f7(s382retdecInstance*,U32,U32,U32);

void f8(s382retdecInstance*,U32,U32,U32);

void s382retdec____wasm_call_ctors(s382retdecInstance*i);

void s382retdec____wasm_apply_data_relocs(s382retdecInstance*i);

U32 s382retdec_func_1(s382retdecInstance*i);

void s382retdec_call_cb(s382retdecInstance*i,U32 l0);

void s382retdecInstantiate(s382retdecInstance* instance, void* resolve(const char* module, const char* name));

void s382retdecFreeInstance(s382retdecInstance* instance);

#endif /* s382retdec_H */

