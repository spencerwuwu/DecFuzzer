#ifndef s112retdec_H
#define s112retdec_H

#include "w2c2_base.h"

typedef struct s112retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s112retdecInstance;

void f0(s112retdecInstance*);

void f1(s112retdecInstance*);

U32 f2(s112retdecInstance*);

void f3(s112retdecInstance*,U32);

U32 f4(s112retdecInstance*,U32,U32,U32,U32,U32);

void f5(s112retdecInstance*,U32,U32,U32,U32,U32);

void f6(s112retdecInstance*,U32);

void f7(s112retdecInstance*,U32,U32,U32);

void f8(s112retdecInstance*,U32,U32,U32);

void s112retdec____wasm_call_ctors(s112retdecInstance*i);

void s112retdec____wasm_apply_data_relocs(s112retdecInstance*i);

U32 s112retdec_func_1(s112retdecInstance*i);

void s112retdec_call_cb(s112retdecInstance*i,U32 l0);

void s112retdecInstantiate(s112retdecInstance* instance, void* resolve(const char* module, const char* name));

void s112retdecFreeInstance(s112retdecInstance* instance);

#endif /* s112retdec_H */

