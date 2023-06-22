#ifndef s226retdec_H
#define s226retdec_H

#include "w2c2_base.h"

typedef struct s226retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s226retdecInstance;

void f0(s226retdecInstance*);

void f1(s226retdecInstance*);

U32 f2(s226retdecInstance*);

void f3(s226retdecInstance*,U32);

U32 f4(s226retdecInstance*,U32,U32,U32);

void f5(s226retdecInstance*,U32,U32,U32,U32,U32);

void f6(s226retdecInstance*,U32);

void f7(s226retdecInstance*,U32,U32,U32);

void f8(s226retdecInstance*,U32,U32,U32);

void s226retdec____wasm_call_ctors(s226retdecInstance*i);

void s226retdec____wasm_apply_data_relocs(s226retdecInstance*i);

U32 s226retdec_func_1(s226retdecInstance*i);

void s226retdec_call_cb(s226retdecInstance*i,U32 l0);

void s226retdecInstantiate(s226retdecInstance* instance, void* resolve(const char* module, const char* name));

void s226retdecFreeInstance(s226retdecInstance* instance);

#endif /* s226retdec_H */

