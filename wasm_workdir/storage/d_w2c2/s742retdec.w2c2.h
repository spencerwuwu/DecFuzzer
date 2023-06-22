#ifndef s742retdec_H
#define s742retdec_H

#include "w2c2_base.h"

typedef struct s742retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s742retdecInstance;

void f0(s742retdecInstance*);

void f1(s742retdecInstance*);

U32 f2(s742retdecInstance*);

void f3(s742retdecInstance*,U32);

U32 f4(s742retdecInstance*,U32,U32,U32,U32);

void f5(s742retdecInstance*,U32,U32,U32,U32,U32);

void f6(s742retdecInstance*,U32);

void f7(s742retdecInstance*,U32,U32,U32);

void f8(s742retdecInstance*,U32,U32,U32);

void s742retdec____wasm_call_ctors(s742retdecInstance*i);

void s742retdec____wasm_apply_data_relocs(s742retdecInstance*i);

U32 s742retdec_func_1(s742retdecInstance*i);

void s742retdec_call_cb(s742retdecInstance*i,U32 l0);

void s742retdecInstantiate(s742retdecInstance* instance, void* resolve(const char* module, const char* name));

void s742retdecFreeInstance(s742retdecInstance* instance);

#endif /* s742retdec_H */

