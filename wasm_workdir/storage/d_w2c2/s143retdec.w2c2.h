#ifndef s143retdec_H
#define s143retdec_H

#include "w2c2_base.h"

typedef struct s143retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s143retdecInstance;

void f0(s143retdecInstance*);

void f1(s143retdecInstance*);

U32 f2(s143retdecInstance*);

void f3(s143retdecInstance*,U32);

U32 f4(s143retdecInstance*,U32,U32,U32);

void f5(s143retdecInstance*,U32,U32,U32,U32,U32);

void f6(s143retdecInstance*,U32);

void f7(s143retdecInstance*,U32,U32,U32);

void f8(s143retdecInstance*,U32,U32,U32);

void s143retdec____wasm_call_ctors(s143retdecInstance*i);

void s143retdec____wasm_apply_data_relocs(s143retdecInstance*i);

U32 s143retdec_func_1(s143retdecInstance*i);

void s143retdec_call_cb(s143retdecInstance*i,U32 l0);

void s143retdecInstantiate(s143retdecInstance* instance, void* resolve(const char* module, const char* name));

void s143retdecFreeInstance(s143retdecInstance* instance);

#endif /* s143retdec_H */

