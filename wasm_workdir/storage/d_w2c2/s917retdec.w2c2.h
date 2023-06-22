#ifndef s917retdec_H
#define s917retdec_H

#include "w2c2_base.h"

typedef struct s917retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s917retdecInstance;

void f0(s917retdecInstance*);

void f1(s917retdecInstance*);

U32 f2(s917retdecInstance*);

void f3(s917retdecInstance*,U32);

U32 f4(s917retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s917retdecInstance*,U32,U32,U32,U32,U32);

void f6(s917retdecInstance*,U32);

void f7(s917retdecInstance*,U32,U32,U32);

void f8(s917retdecInstance*,U32,U32,U32);

void s917retdec____wasm_call_ctors(s917retdecInstance*i);

void s917retdec____wasm_apply_data_relocs(s917retdecInstance*i);

U32 s917retdec_func_1(s917retdecInstance*i);

void s917retdec_call_cb(s917retdecInstance*i,U32 l0);

void s917retdecInstantiate(s917retdecInstance* instance, void* resolve(const char* module, const char* name));

void s917retdecFreeInstance(s917retdecInstance* instance);

#endif /* s917retdec_H */

