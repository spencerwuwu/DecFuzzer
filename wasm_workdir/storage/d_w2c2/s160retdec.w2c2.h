#ifndef s160retdec_H
#define s160retdec_H

#include "w2c2_base.h"

typedef struct s160retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s160retdecInstance;

void f0(s160retdecInstance*);

void f1(s160retdecInstance*);

U32 f2(s160retdecInstance*);

void f3(s160retdecInstance*,U32);

U32 f4(s160retdecInstance*,U32,U32,U32);

void f5(s160retdecInstance*,U32,U32,U32,U32,U32);

void f6(s160retdecInstance*,U32);

void f7(s160retdecInstance*,U32,U32,U32);

void f8(s160retdecInstance*,U32,U32,U32);

void s160retdec____wasm_call_ctors(s160retdecInstance*i);

void s160retdec____wasm_apply_data_relocs(s160retdecInstance*i);

U32 s160retdec_func_1(s160retdecInstance*i);

void s160retdec_call_cb(s160retdecInstance*i,U32 l0);

void s160retdecInstantiate(s160retdecInstance* instance, void* resolve(const char* module, const char* name));

void s160retdecFreeInstance(s160retdecInstance* instance);

#endif /* s160retdec_H */

