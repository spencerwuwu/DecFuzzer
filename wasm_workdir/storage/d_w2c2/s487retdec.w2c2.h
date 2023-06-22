#ifndef s487retdec_H
#define s487retdec_H

#include "w2c2_base.h"

typedef struct s487retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s487retdecInstance;

void f0(s487retdecInstance*);

void f1(s487retdecInstance*);

U32 f2(s487retdecInstance*);

void f3(s487retdecInstance*,U32);

U32 f4(s487retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s487retdecInstance*,U32,U32,U32,U32,U32);

void f6(s487retdecInstance*,U32);

void f7(s487retdecInstance*,U32,U32,U32);

void f8(s487retdecInstance*,U32,U32,U32);

void s487retdec____wasm_call_ctors(s487retdecInstance*i);

void s487retdec____wasm_apply_data_relocs(s487retdecInstance*i);

U32 s487retdec_func_1(s487retdecInstance*i);

void s487retdec_call_cb(s487retdecInstance*i,U32 l0);

void s487retdecInstantiate(s487retdecInstance* instance, void* resolve(const char* module, const char* name));

void s487retdecFreeInstance(s487retdecInstance* instance);

#endif /* s487retdec_H */

