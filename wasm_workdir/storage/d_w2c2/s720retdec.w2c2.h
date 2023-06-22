#ifndef s720retdec_H
#define s720retdec_H

#include "w2c2_base.h"

typedef struct s720retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s720retdecInstance;

void f0(s720retdecInstance*);

void f1(s720retdecInstance*);

U32 f2(s720retdecInstance*);

void f3(s720retdecInstance*,U32);

U32 f4(s720retdecInstance*,U32,U32,U32,U32,U32);

void f5(s720retdecInstance*,U32,U32,U32,U32,U32);

void f6(s720retdecInstance*,U32);

void f7(s720retdecInstance*,U32,U32,U32);

void f8(s720retdecInstance*,U32,U32,U32);

void s720retdec____wasm_call_ctors(s720retdecInstance*i);

void s720retdec____wasm_apply_data_relocs(s720retdecInstance*i);

U32 s720retdec_func_1(s720retdecInstance*i);

void s720retdec_call_cb(s720retdecInstance*i,U32 l0);

void s720retdecInstantiate(s720retdecInstance* instance, void* resolve(const char* module, const char* name));

void s720retdecFreeInstance(s720retdecInstance* instance);

#endif /* s720retdec_H */

