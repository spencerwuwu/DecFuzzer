#ifndef s83retdec_H
#define s83retdec_H

#include "w2c2_base.h"

typedef struct s83retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s83retdecInstance;

void f0(s83retdecInstance*);

void f1(s83retdecInstance*);

U32 f2(s83retdecInstance*);

void f3(s83retdecInstance*,U32);

void f4(s83retdecInstance*,U32);

void s83retdec____wasm_call_ctors(s83retdecInstance*i);

void s83retdec____wasm_apply_data_relocs(s83retdecInstance*i);

U32 s83retdec_func_1(s83retdecInstance*i);

void s83retdec_call_cb(s83retdecInstance*i,U32 l0);

void s83retdecInstantiate(s83retdecInstance* instance, void* resolve(const char* module, const char* name));

void s83retdecFreeInstance(s83retdecInstance* instance);

#endif /* s83retdec_H */

