#ifndef s175retdec_H
#define s175retdec_H

#include "w2c2_base.h"

typedef struct s175retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s175retdecInstance;

void f0(s175retdecInstance*);

void f1(s175retdecInstance*);

U32 f2(s175retdecInstance*);

void f3(s175retdecInstance*,U32);

U32 f4(s175retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s175retdecInstance*,U32,U32,U32,U32,U32);

void f6(s175retdecInstance*,U32);

void f7(s175retdecInstance*,U32,U32,U32);

void f8(s175retdecInstance*,U32,U32,U32);

void s175retdec____wasm_call_ctors(s175retdecInstance*i);

void s175retdec____wasm_apply_data_relocs(s175retdecInstance*i);

U32 s175retdec_func_1(s175retdecInstance*i);

void s175retdec_call_cb(s175retdecInstance*i,U32 l0);

void s175retdecInstantiate(s175retdecInstance* instance, void* resolve(const char* module, const char* name));

void s175retdecFreeInstance(s175retdecInstance* instance);

#endif /* s175retdec_H */

