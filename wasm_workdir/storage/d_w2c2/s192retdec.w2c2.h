#ifndef s192retdec_H
#define s192retdec_H

#include "w2c2_base.h"

typedef struct s192retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s192retdecInstance;

void f0(s192retdecInstance*);

void f1(s192retdecInstance*);

U32 f2(s192retdecInstance*);

void f3(s192retdecInstance*,U32);

U32 f4(s192retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s192retdecInstance*,U32,U32,U32,U32,U32);

void f6(s192retdecInstance*,U32);

void f7(s192retdecInstance*,U32,U32,U32);

void f8(s192retdecInstance*,U32,U32,U32);

void s192retdec____wasm_call_ctors(s192retdecInstance*i);

void s192retdec____wasm_apply_data_relocs(s192retdecInstance*i);

U32 s192retdec_func_1(s192retdecInstance*i);

void s192retdec_call_cb(s192retdecInstance*i,U32 l0);

void s192retdecInstantiate(s192retdecInstance* instance, void* resolve(const char* module, const char* name));

void s192retdecFreeInstance(s192retdecInstance* instance);

#endif /* s192retdec_H */

