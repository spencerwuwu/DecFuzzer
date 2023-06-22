#ifndef s686retdec_H
#define s686retdec_H

#include "w2c2_base.h"

typedef struct s686retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s686retdecInstance;

void f0(s686retdecInstance*);

void f1(s686retdecInstance*);

U32 f2(s686retdecInstance*);

void f3(s686retdecInstance*,U32);

U32 f4(s686retdecInstance*,U32,U32,U32,U32);

void f5(s686retdecInstance*,U32,U32,U32,U32,U32);

void f6(s686retdecInstance*,U32);

void f7(s686retdecInstance*,U32,U32,U32);

void f8(s686retdecInstance*,U32,U32,U32);

void s686retdec____wasm_call_ctors(s686retdecInstance*i);

void s686retdec____wasm_apply_data_relocs(s686retdecInstance*i);

U32 s686retdec_func_1(s686retdecInstance*i);

void s686retdec_call_cb(s686retdecInstance*i,U32 l0);

void s686retdecInstantiate(s686retdecInstance* instance, void* resolve(const char* module, const char* name));

void s686retdecFreeInstance(s686retdecInstance* instance);

#endif /* s686retdec_H */

