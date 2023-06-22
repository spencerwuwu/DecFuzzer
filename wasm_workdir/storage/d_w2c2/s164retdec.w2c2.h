#ifndef s164retdec_H
#define s164retdec_H

#include "w2c2_base.h"

typedef struct s164retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s164retdecInstance;

void f0(s164retdecInstance*);

void f1(s164retdecInstance*);

U32 f2(s164retdecInstance*);

void f3(s164retdecInstance*,U32);

U32 f4(s164retdecInstance*,U32,U32,U32,U32,U32);

void f5(s164retdecInstance*,U32,U32,U32,U32,U32);

void f6(s164retdecInstance*,U32);

void f7(s164retdecInstance*,U32,U32,U32);

void f8(s164retdecInstance*,U32,U32,U32);

void s164retdec____wasm_call_ctors(s164retdecInstance*i);

void s164retdec____wasm_apply_data_relocs(s164retdecInstance*i);

U32 s164retdec_func_1(s164retdecInstance*i);

void s164retdec_call_cb(s164retdecInstance*i,U32 l0);

void s164retdecInstantiate(s164retdecInstance* instance, void* resolve(const char* module, const char* name));

void s164retdecFreeInstance(s164retdecInstance* instance);

#endif /* s164retdec_H */

