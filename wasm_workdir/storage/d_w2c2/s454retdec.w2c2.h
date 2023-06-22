#ifndef s454retdec_H
#define s454retdec_H

#include "w2c2_base.h"

typedef struct s454retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s454retdecInstance;

void f0(s454retdecInstance*);

void f1(s454retdecInstance*);

U32 f2(s454retdecInstance*);

void f3(s454retdecInstance*,U32);

U32 f4(s454retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s454retdecInstance*,U32,U32,U32,U32,U32);

void f6(s454retdecInstance*,U32);

void f7(s454retdecInstance*,U32,U32,U32);

void f8(s454retdecInstance*,U32,U32,U32);

void s454retdec____wasm_call_ctors(s454retdecInstance*i);

void s454retdec____wasm_apply_data_relocs(s454retdecInstance*i);

U32 s454retdec_func_1(s454retdecInstance*i);

void s454retdec_call_cb(s454retdecInstance*i,U32 l0);

void s454retdecInstantiate(s454retdecInstance* instance, void* resolve(const char* module, const char* name));

void s454retdecFreeInstance(s454retdecInstance* instance);

#endif /* s454retdec_H */

