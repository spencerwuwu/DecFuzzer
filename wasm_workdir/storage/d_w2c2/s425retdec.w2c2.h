#ifndef s425retdec_H
#define s425retdec_H

#include "w2c2_base.h"

typedef struct s425retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s425retdecInstance;

void f0(s425retdecInstance*);

void f1(s425retdecInstance*);

U32 f2(s425retdecInstance*);

void f3(s425retdecInstance*,U32);

U32 f4(s425retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s425retdecInstance*,U32,U32,U32,U32,U32);

void f6(s425retdecInstance*,U32);

void f7(s425retdecInstance*,U32,U32,U32);

void f8(s425retdecInstance*,U32,U32,U32);

void s425retdec____wasm_call_ctors(s425retdecInstance*i);

void s425retdec____wasm_apply_data_relocs(s425retdecInstance*i);

U32 s425retdec_func_1(s425retdecInstance*i);

void s425retdec_call_cb(s425retdecInstance*i,U32 l0);

void s425retdecInstantiate(s425retdecInstance* instance, void* resolve(const char* module, const char* name));

void s425retdecFreeInstance(s425retdecInstance* instance);

#endif /* s425retdec_H */

