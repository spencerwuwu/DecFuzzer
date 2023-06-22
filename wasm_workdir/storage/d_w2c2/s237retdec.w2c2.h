#ifndef s237retdec_H
#define s237retdec_H

#include "w2c2_base.h"

typedef struct s237retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s237retdecInstance;

void f0(s237retdecInstance*);

void f1(s237retdecInstance*);

U32 f2(s237retdecInstance*);

void f3(s237retdecInstance*,U32);

U32 f4(s237retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s237retdecInstance*,U32,U32,U32,U32,U32);

void f6(s237retdecInstance*,U32);

void f7(s237retdecInstance*,U32,U32,U32);

void f8(s237retdecInstance*,U32,U32,U32);

void s237retdec____wasm_call_ctors(s237retdecInstance*i);

void s237retdec____wasm_apply_data_relocs(s237retdecInstance*i);

U32 s237retdec_func_1(s237retdecInstance*i);

void s237retdec_call_cb(s237retdecInstance*i,U32 l0);

void s237retdecInstantiate(s237retdecInstance* instance, void* resolve(const char* module, const char* name));

void s237retdecFreeInstance(s237retdecInstance* instance);

#endif /* s237retdec_H */

