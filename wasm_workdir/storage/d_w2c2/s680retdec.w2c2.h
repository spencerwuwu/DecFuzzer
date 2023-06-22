#ifndef s680retdec_H
#define s680retdec_H

#include "w2c2_base.h"

typedef struct s680retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s680retdecInstance;

void f0(s680retdecInstance*);

void f1(s680retdecInstance*);

U32 f2(s680retdecInstance*);

void f3(s680retdecInstance*,U32);

void f4(s680retdecInstance*,U32);

void s680retdec____wasm_call_ctors(s680retdecInstance*i);

void s680retdec____wasm_apply_data_relocs(s680retdecInstance*i);

U32 s680retdec_func_1(s680retdecInstance*i);

void s680retdec_call_cb(s680retdecInstance*i,U32 l0);

void s680retdecInstantiate(s680retdecInstance* instance, void* resolve(const char* module, const char* name));

void s680retdecFreeInstance(s680retdecInstance* instance);

#endif /* s680retdec_H */

