#ifndef s351retdec_H
#define s351retdec_H

#include "w2c2_base.h"

typedef struct s351retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s351retdecInstance;

void f0(s351retdecInstance*);

void f1(s351retdecInstance*);

U32 f2(s351retdecInstance*);

void f3(s351retdecInstance*,U32);

U32 f4(s351retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s351retdecInstance*,U32,U32,U32,U32,U32);

void f6(s351retdecInstance*,U32);

void f7(s351retdecInstance*,U32,U32,U32);

void f8(s351retdecInstance*,U32,U32,U32);

void s351retdec____wasm_call_ctors(s351retdecInstance*i);

void s351retdec____wasm_apply_data_relocs(s351retdecInstance*i);

U32 s351retdec_func_1(s351retdecInstance*i);

void s351retdec_call_cb(s351retdecInstance*i,U32 l0);

void s351retdecInstantiate(s351retdecInstance* instance, void* resolve(const char* module, const char* name));

void s351retdecFreeInstance(s351retdecInstance* instance);

#endif /* s351retdec_H */

