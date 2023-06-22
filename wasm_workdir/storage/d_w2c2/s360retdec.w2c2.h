#ifndef s360retdec_H
#define s360retdec_H

#include "w2c2_base.h"

typedef struct s360retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s360retdecInstance;

void f0(s360retdecInstance*);

void f1(s360retdecInstance*);

U32 f2(s360retdecInstance*);

void f3(s360retdecInstance*,U32);

U32 f4(s360retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s360retdecInstance*,U32,U32,U32,U32,U32);

void f6(s360retdecInstance*,U32);

void f7(s360retdecInstance*,U32,U32,U32);

void f8(s360retdecInstance*,U32,U32,U32);

void s360retdec____wasm_call_ctors(s360retdecInstance*i);

void s360retdec____wasm_apply_data_relocs(s360retdecInstance*i);

U32 s360retdec_func_1(s360retdecInstance*i);

void s360retdec_call_cb(s360retdecInstance*i,U32 l0);

void s360retdecInstantiate(s360retdecInstance* instance, void* resolve(const char* module, const char* name));

void s360retdecFreeInstance(s360retdecInstance* instance);

#endif /* s360retdec_H */

