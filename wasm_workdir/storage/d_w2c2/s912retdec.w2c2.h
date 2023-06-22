#ifndef s912retdec_H
#define s912retdec_H

#include "w2c2_base.h"

typedef struct s912retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s912retdecInstance;

void f0(s912retdecInstance*);

void f1(s912retdecInstance*);

U32 f2(s912retdecInstance*);

void f3(s912retdecInstance*,U32);

U32 f4(s912retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s912retdecInstance*,U32,U32,U32,U32,U32);

void f6(s912retdecInstance*,U32);

void f7(s912retdecInstance*,U32,U32,U32);

void f8(s912retdecInstance*,U32,U32,U32);

void s912retdec____wasm_call_ctors(s912retdecInstance*i);

void s912retdec____wasm_apply_data_relocs(s912retdecInstance*i);

U32 s912retdec_func_1(s912retdecInstance*i);

void s912retdec_call_cb(s912retdecInstance*i,U32 l0);

void s912retdecInstantiate(s912retdecInstance* instance, void* resolve(const char* module, const char* name));

void s912retdecFreeInstance(s912retdecInstance* instance);

#endif /* s912retdec_H */

