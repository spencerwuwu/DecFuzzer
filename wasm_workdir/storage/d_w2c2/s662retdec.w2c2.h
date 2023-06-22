#ifndef s662retdec_H
#define s662retdec_H

#include "w2c2_base.h"

typedef struct s662retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s662retdecInstance;

void f0(s662retdecInstance*);

void f1(s662retdecInstance*);

U32 f2(s662retdecInstance*);

void f3(s662retdecInstance*,U32);

U32 f4(s662retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s662retdecInstance*,U32,U32,U32,U32,U32);

void f6(s662retdecInstance*,U32);

void f7(s662retdecInstance*,U32,U32,U32);

void f8(s662retdecInstance*,U32,U32,U32);

void s662retdec____wasm_call_ctors(s662retdecInstance*i);

void s662retdec____wasm_apply_data_relocs(s662retdecInstance*i);

U32 s662retdec_func_1(s662retdecInstance*i);

void s662retdec_call_cb(s662retdecInstance*i,U32 l0);

void s662retdecInstantiate(s662retdecInstance* instance, void* resolve(const char* module, const char* name));

void s662retdecFreeInstance(s662retdecInstance* instance);

#endif /* s662retdec_H */

