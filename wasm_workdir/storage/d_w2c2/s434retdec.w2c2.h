#ifndef s434retdec_H
#define s434retdec_H

#include "w2c2_base.h"

typedef struct s434retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s434retdecInstance;

void f0(s434retdecInstance*);

void f1(s434retdecInstance*);

U32 f2(s434retdecInstance*);

void f3(s434retdecInstance*,U32);

U32 f4(s434retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s434retdecInstance*,U32,U32,U32,U32,U32);

void f6(s434retdecInstance*,U32);

void f7(s434retdecInstance*,U32,U32,U32);

void f8(s434retdecInstance*,U32,U32,U32);

void s434retdec____wasm_call_ctors(s434retdecInstance*i);

void s434retdec____wasm_apply_data_relocs(s434retdecInstance*i);

U32 s434retdec_func_1(s434retdecInstance*i);

void s434retdec_call_cb(s434retdecInstance*i,U32 l0);

void s434retdecInstantiate(s434retdecInstance* instance, void* resolve(const char* module, const char* name));

void s434retdecFreeInstance(s434retdecInstance* instance);

#endif /* s434retdec_H */

