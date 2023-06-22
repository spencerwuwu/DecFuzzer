#ifndef s722retdec_H
#define s722retdec_H

#include "w2c2_base.h"

typedef struct s722retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s722retdecInstance;

void f0(s722retdecInstance*);

void f1(s722retdecInstance*);

U32 f2(s722retdecInstance*);

void f3(s722retdecInstance*,U32);

U32 f4(s722retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s722retdecInstance*,U32,U32,U32,U32,U32);

void f6(s722retdecInstance*,U32);

void f7(s722retdecInstance*,U32,U32,U32);

void f8(s722retdecInstance*,U32,U32,U32);

void s722retdec____wasm_call_ctors(s722retdecInstance*i);

void s722retdec____wasm_apply_data_relocs(s722retdecInstance*i);

U32 s722retdec_func_1(s722retdecInstance*i);

void s722retdec_call_cb(s722retdecInstance*i,U32 l0);

void s722retdecInstantiate(s722retdecInstance* instance, void* resolve(const char* module, const char* name));

void s722retdecFreeInstance(s722retdecInstance* instance);

#endif /* s722retdec_H */

